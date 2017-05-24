#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
void cbButton(Fl_Widget*, void* userdata) {
  Fl_Box* msgbox = (Fl_Box*) userdata;
  msgbox->label("Hello");
}
int main(int argc, char ** argv) {
  Fl_Window* window = new Fl_Window(160, 120);
  Fl_Box* msgbox = new Fl_Box(40, 20, 80, 25);
  Fl_Button* button = new Fl_Button(40, 60, 80, 25, "Say Hello");
  button->callback(cbButton, msgbox);
  msgbox->box(FL_BORDER_BOX);
  window->end();
  window->show(argc,argv);
  return Fl::run();
}
