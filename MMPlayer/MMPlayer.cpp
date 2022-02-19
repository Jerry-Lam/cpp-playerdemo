#include "MMThread/MMThread.h"
#include <chrono>
#include <thread>

void threadFunction(int i) { printf("Thread Function\n%d", i); }

void threadFun(int ThreadIndex) {
  for (int i = 0; i < 1000; i++) {
    printf("Thread: %d, index: %d\n", ThreadIndex, i);
  }
}

int main2() {
  // std::thread t(threadFunction, 10);
  // t.join();
  // t.detach();

  // t.joinable();

  std::thread t1(threadFun, 1);
  std::thread t2(threadFun, 2);

  t1.join();
  t2.join();
  return EXIT_SUCCESS;
}

class MyMMThread : public MMThread {
private:
  int a = 0;

public:
  MyMMThread(int _a) { a = _a; }

  void run() { printf("MyMMThread %d\n", a); }
};

int main() {
  MyMMThread t(10);
  t.Start();

  std::this_thread::sleep_for(std::chrono::seconds(2));
  return EXIT_SUCCESS;
}