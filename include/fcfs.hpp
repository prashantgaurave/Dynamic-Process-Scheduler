#pragma once
#include <scheduler.hpp>
#include <Process.hpp>
#include <algorithm>
#include <vector>

class FCFS : public Scheduler
{
    public:
    void schedule(std::vector<Process>& processes) override
    { 
        std::sort(processes.begin(), processes.end(), [](const Process &a, const Process &b) {
            return a.arrivalTime < b.arrivalTime;
        });

        int currTime = 0;
        for(Process &p : processes)
        {
           p.completionTime = currTime + p.runTime;
           p.turnAroundTime = p.completionTime - p.arrivalTime;
           //actual completion - expected completion
           p.waitingTime = p.completionTime-p.runTime-p.arrivalTime;
           currTime = p.completionTime;
        }

    }

};