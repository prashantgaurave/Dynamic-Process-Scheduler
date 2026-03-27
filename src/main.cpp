#include "Process.hpp"
#include <fcfs.hpp>
#include <vector>
#include <iostream>

int main()
{
    std::vector<Process> processes = {{0, 5}, {2, 3}, {4, 1}};
    FCFS obj;
    obj.schedule(processes);
    std::cout<<"Done and dusted\n";

    return 0;
}
