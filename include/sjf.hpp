#pragma once
#include <scheduler.hpp>
#include <Process.hpp>
#include <algorithm>
#include <vector>

class SJF : public Scheduler
{
    public:
    void schedule(std::vector<Process>& processes) override
    { 
        //assumption: every job arrive at same time
        //so whatever runTime calculated at time = 0, is considered final
        std::sort(processes.begin(), processes.end(), [](const Process &a, const Process &b) {
            return a.runTime < b.runTime;
        });

        int currTime = 0;
        for(Process &p : processes)
        {
           p.completionTime = currTime + p.runTime;
           p.turnAroundTime = p.completionTime - p.arrivalTime;
           //actual completion - expected completion
           p.waitingTime = p.turnAroundTime-p.runTime;
           currTime = p.completionTime;
        }

    }

};