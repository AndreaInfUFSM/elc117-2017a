#include <string>
#include <iostream>
#include <vector>
#include <iterator>

class Person {
private:
   std::string name;
public:
   Person() {
      std::cout << "Construtor default de Person" << std::endl;
      name = "Fulano";
   }
   std::string getName() {
      return name;
   }
   void setName(std::string name) {
      this->name = name;
   }
};

class Student : public Person {
   std::string course;
public:
   Student() {
      std::cout << "Construtor default de Student" << std::endl;
      course = "CC";
   }
};

int main() {
   Person p;
   Student s;
   
   std::vector<Person*> v;
   v.push_back(&p);
   v.push_back(&s);
   std::vector<Person*>::iterator it;
   for (it = v.begin(); it != v.end(); it++)
      std::cout<< (*it)->getName() << " ";
   std::cout << std::endl;
}

