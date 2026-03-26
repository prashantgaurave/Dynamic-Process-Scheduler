#include "Process.hpp"
#include <vector>

int main()
{
    std::vector<Process> processes = {{0, 5}, {2, 3}, {4, 1}};
    fcfs(processes);

    return 0;
}
