#include "Process.hpp"
#include <fcfs.hpp>
#include <vector>
#include <iostream>
#include <statistics.hpp>

int main()
{
    std::vector<Process> processes = {{1, 0 , 5}, {2, 1, 3}, {3, 2, 8}};
    FCFS obj;
    obj.schedule(processes);
    ganttChart(processes);
    processStats(processes);

    return 0;
}
