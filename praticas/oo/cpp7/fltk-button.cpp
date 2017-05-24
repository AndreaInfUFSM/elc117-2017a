#include <iostream>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>

void cbButton(Fl_Widget *, void *) {
  std::cout << "Clicked" << std::endl;
}

int main(int argc, char ** argv) {
  Fl_Window *window = new Fl_Window(160, 65);
  Fl_Button *button = new Fl_Button(40, 20, 80, 25, "Click me");
  button->callback(cbButton, 0);
  window->end();
  window->show(argc,argv);
  return Fl::run();
}
