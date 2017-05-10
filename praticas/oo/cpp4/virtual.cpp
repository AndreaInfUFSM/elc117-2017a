#include <iostream>
#include <vector>
#include <iterator>

class Animal {
public:
   virtual void move() {
      std::cout << "Animal moving" << std::endl;
   }
   virtual void eat() {
      std::cout << "Animal eating" << std::endl;
   }
};

class Cat : public Animal {
public:
   void move() {
      std::cout << "Cat moving" << std::endl;
   }
   void eat() {
      std::cout << "Cat eating" << std::endl;
   }
};


int main() {
   Animal a;
   Cat c;
   a.move(); // Animal moving
   a.eat();  // Animal eating
   c.move(); // Cat moving
   c.eat();  // Cat eating
   
   std::cout << "---" << std::endl;
   
   Animal* ap = &a;
   ap->move(); // who is moving?
   ap->eat();  // who is eating?
   ap = &c;  
   ap->move(); // who is moving?
   ap->eat();  // who is eating?
   
   std::cout << "---" << std::endl;
   
   std::vector<Animal*> animals;
   animals.push_back(&a);
   animals.push_back(&c);
   std::vector<Animal*>::iterator it;
   for (it = animals.begin(); it != animals.end(); it++) {
      (*it)->move(); // who is moving?
      (*it)->eat();  // who is moving?
   }

   std::cout << "---" << std::endl;
   
   std::vector<Animal> ranimals;
   ranimals.push_back(a);
   ranimals.push_back(c);
   std::vector<Animal>::iterator iter;
   for (iter = ranimals.begin(); iter != ranimals.end(); iter++) {
      iter->move(); // who is moving?
      iter->eat();  // who is moving?
   }
   
}

