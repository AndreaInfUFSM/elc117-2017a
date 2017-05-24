#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>

class myWin : public Fl_Window {
private:
  Fl_Box* msgbox;
  Fl_Button* button;
  static void cbButton(Fl_Widget*, void* userdata) {
    Fl_Box* msgbox = (Fl_Box*) userdata;
    msgbox->label("Hello");
  }
public:
  myWin() : Fl_Window(160, 120) {
    msgbox = new Fl_Box(40, 20, 80, 25);
    button = new Fl_Button(40, 60, 80, 25, "Say Hello");
    button->callback(cbButton, msgbox);
    msgbox->box(FL_BORDER_BOX);
    this->end(); 
  }
};
int main(int argc, char** argv) {
  myWin win;
  win.show();
  return Fl::run();
}
