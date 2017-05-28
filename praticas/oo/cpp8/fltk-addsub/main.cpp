#include <string>
#include <stdexcept>
#include <FL/fl_ask.H>
#include "window.h"

class AddSubView : public UserInterface {

public:
  
  AddSubView() {
    btnAdd->callback((Fl_Callback*) cbBtnAddSub, (void*)(this));
    btnSub->callback((Fl_Callback*) cbBtnAddSub, (void*)(this)); 
    btnClear->callback((Fl_Callback*) cbBtnClear, (void*)(this));
  }
  
  void show() {
    // Mostra janela
    w->show();
  }
  
  // Funcao callback chamada quando pressionado botao '+' ou botao '-'
  static void cbBtnAddSub(Fl_Widget* btn, void* userdata) {
    AddSubView* gui = static_cast<AddSubView*>(userdata);
    try {
      int a = std::stoi(gui->inputValue1->value());
      int b = std::stoi(gui->inputValue2->value());
      // Faz o calculo de acordo com o botao pressionado
      int result = (btn == gui->btnAdd) ? a+b : a-b;
      gui->boxResult->copy_label(std::to_string(result).c_str());
    } catch (std::invalid_argument&) {
      fl_alert("A e B devem ser numeros inteiros");
    } catch (std::out_of_range&) {
      fl_alert("Argumentos fora de faixa");
    }
  }

  // Funcao callback chamada quando pressionado botao 'Clear'
  static void cbBtnClear(Fl_Widget* btn, void* userdata) {
    AddSubView* gui = static_cast<AddSubView*>(userdata);
    gui->inputValue1->value("");
    gui->inputValue2->value("");
    gui->boxResult->label("");
  }

};

int main() {
  AddSubView gui;
  gui.show();
  return Fl::run();
}


