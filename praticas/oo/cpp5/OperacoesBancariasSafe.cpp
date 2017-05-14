#include <iostream>
#include <thread>
#include <mutex>

class Conta {
private: 
   float saldo;
   std::mutex mutex;
public:
   Conta() : saldo(0.0) {
   }
   Conta(float valor) : saldo(valor) {
   }
   void deposita(float valor) {
      mutex.lock();
      saldo += valor;
      mutex.unlock();
   }
   void retira(float valor) {
      mutex.lock();
      saldo -= valor;
      mutex.unlock();
   }
   float getSaldo() {
      return saldo;
   }
};


class ThreadDeposita {
private:
   Conta* c;
public:
   ThreadDeposita(Conta* c) {
      this->c = c;
   }
   void run() {
      for (int i = 0; i < 10; ++i) 
         c->deposita(100.0);
   }
};

class ThreadRetira {
private:
   Conta* c;
public:
   ThreadRetira(Conta* c) {
      this->c = c;
   }
   void run() {
      for (int i = 0; i < 5; ++i) 
         c->retira(50.0);
   }
};

int main() {

   Conta c(100.0);
   ThreadDeposita d(&c);
   ThreadRetira r(&c);
   
   std::thread td(&ThreadDeposita::run, &d);
   std::thread tr(&ThreadRetira::run, &r);
   td.join();
   tr.join();
   std::cout << c.getSaldo() << std::endl;
}
