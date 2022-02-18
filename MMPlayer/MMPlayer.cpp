#include <thread>

void threadFunction(int i) { printf("Thread Function\n%d", i); }

void threadFun(int ThreadIndex) {
  for (int i = 0; i < 1000; i++) {
    printf("Thread: %d, index: %d\n", ThreadIndex, i);
  }
}

int main() {
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