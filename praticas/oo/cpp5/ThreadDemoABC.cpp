#include <algorithm>
#include <iostream>
#include <string>
#include <thread>

class SharedArray {
private:
   char* array;
   int index;
   int size;
public:
   SharedArray(int n) : size(n), index(0) {
      array = new char[size];
      std::fill(array, array+size, '-');
   }
   ~SharedArray() {
      delete[] array;
   }
   void addChar(char c) {
      array[index] = c;
      spendSomeTime();
      index++;
   }
   int countOccurrences(char c) {
      return std::count(array, array+size, c);
   }
   std::string toString() {
      return std::string(array, size);
   }
private:
   void spendSomeTime() {
      for (int i = 0; i < 10000; i++) {
         for (int j = 0; j < 100; j++) {
         }
      }
   }
};


class ArrayFiller {
private:
   static const int nThreads = 3;
   static const int nTimes = 20;
   SharedArray* array;
public:
   ArrayFiller() {
      array = new SharedArray(nThreads * nTimes);
   }
   void fillArrayConcurrently() {
      std::thread t[nThreads];
      for (int i = 0; i < nThreads; ++i)
         t[i] = std::thread(&ArrayFiller::run, this, 'A'+i);
      for (int i = 0; i < nThreads; ++i)
         t[i].join();
   }
   void printStats() {
      std::cout << array->toString() << std::endl;
      for (int i = 0; i < nThreads; ++i)
         std::cout << (char) ('A'+i) << "=" 
                   << array->countOccurrences('A'+i) << " ";
      std::cout << std::endl;
   }
   ~ArrayFiller() {
      delete array;
   }
private:
   void run(char c) {
      for (int i = 0; i < nTimes; i++) {
         array->addChar(c);
      }
   }
};


int main() {
   ArrayFiller m1;
   m1.fillArrayConcurrently();
   m1.printStats();
   
   ArrayFiller m2;
   m2.fillArrayConcurrently();
   m2.printStats();
}
