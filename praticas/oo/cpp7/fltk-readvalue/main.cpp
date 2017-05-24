#include <iostream>
#include "window.h"

class ReadValueView : public UserInterface {

public:
  
  ReadValueView() {
    readButton->callback((Fl_Callback*) cbBtnRead, (void*)(this));
  }
  
  void show() {
    // Mostra janela
    w->show();
  }
  
  // Funcao chamada quando pressionado botao Read
  static void cbBtnRead(Fl_Widget* btn, void* userdata) {
    ReadValueView* gui = static_cast<ReadValueView*>(userdata);
    std::cout << gui->inputValue->value() << std::endl;
  }

};

int main() {
  ReadValueView gui;
  gui.show();
  return Fl::run();
}


