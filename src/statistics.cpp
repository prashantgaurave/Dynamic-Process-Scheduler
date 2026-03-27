#include <statistics.hpp>

void processStats(std::vector<Process> process)
{
    for(auto& p : process)
    {
        std::cout<<"P"<<p.pid
                 <<" Wait : "<<p.waitingTime
                 <<" Turnaround : "<<p.turnAroundTime<<std::endl;
    }

}

void ganttChart(std::vector<Process> process)
{
    std::cout<<"Gantt Chart:\n";
    for(auto p : process)
    {
        std::cout<<"P"<<p.pid<<" | ";
    }
    std::cout<<"\n";
}