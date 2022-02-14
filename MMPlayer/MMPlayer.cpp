#include <cstdio>
#include <cstdlib>
#include <thread>

void threadFunction() {
    printf("Thread Function\n");
}

int main()
{
    std::thread t(threadFunction);
    t.join();
    // t.detach();

    // t.joinable();

    return EXIT_SUCCESS;
}