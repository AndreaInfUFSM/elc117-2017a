#include <iostream>
#include <thread>

void run() {
   std::cout << "Running" << std::endl;
}

int main() {
   std::thread t1(run);
   std::thread t2(run);
   t1.join();
   t2.join();
   return 0;
}
