#pragma once
#include <vector>
#include "Process.hpp"

class Scheduler
{
    public:
    virtual void schedule(std::vector<Process> processes) = 0;
    virtual ~Scheduler() = default;
};