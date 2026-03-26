#include "Process.hpp"
#include <algorithm>
#include <vector>
using namespace std;

void fcfs(vector<Process>& processes)
{
    sort(processes.begin(),processes.end(),[](auto &a, auto &b)
{
    return a.arrivalTime < b.arrivalTime;
});
}