#include <iostream>

#include <iostream>

const double PI = 3.14159;

class Circle {
private:
   double x;
   double y;
   double r;
public:
   Circle() {
      x = y = r = 0.0;
   }
   double area() {
      return PI * r * r;
   }
};

int main() {
   Circle c1;
   Circle* c2 = new Circle();
   std::cout << c1.area() << std::endl;
   std::cout << c2->area() << std::endl;
   delete c2;
}


