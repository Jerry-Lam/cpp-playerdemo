#include <cstdio>
#include <cstdlib>
#include <thread>

void threadFunction(int i) {
    printf("Thread Function\n%d", i);
}

int main()
{
    std::thread t(threadFunction, 10);
    t.join();
    // t.detach();

    // t.joinable();

    return EXIT_SUCCESS;
}