#include "MMThread.h"
#include <thread>

int MMThread::Start() 
{
    std::thread t(&MMThread::run, this);
    t.detach();
    return EXIT_SUCCESS;
}