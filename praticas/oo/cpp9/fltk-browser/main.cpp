#include <string>
#include <stdexcept>
#include <algorithm>
#include <iterator>
#include <FL/fl_ask.H>
#include <vector>
#include <iostream>
#include "window.h"

class Data {
private:
  std::string type;
  std::string name;
public:
  Data(std::string type, std::string name) {
    this->type = type;
    this->name = name;
  }
  std::string getType() {
    return type;
  }
  std::string getName() {
    return name;
  }
  void setName(std::string name) {
    this->name = name;
  }  
  void setType(std::string type) {
    this->name = type;
  }  

};


class View : public UserInterface {

private:
  std::vector<Data> data; 
   
public:
  
  View() {
    btnClear->callback((Fl_Callback*) cbBtnClear, (void*)(this));
    btnUpdate->callback((Fl_Callback*) cbBtnUpdate, (void*)(this)); 
    btnDelete->callback((Fl_Callback*) cbBtnDelete, (void*)(this)); 
    btnInsert->callback((Fl_Callback*) cbBtnInsert, (void*)(this)); 
    browser->callback((Fl_Callback*) cbBrowser, (void*)(this));
  }
  
  void show() {
    // Mostra janela
    w->show();
  }
  
  // Funcao callback chamada quando pressionado botao 'Clear'
  static void cbBtnClear(Fl_Widget* btn, void* userdata) {
    View* gui = static_cast<View*>(userdata);
    gui->inputType->value("");
    gui->inputName->value("");
  }

  // Funcao callback chamada quando pressionado botao 'Insert'
  static void cbBtnInsert(Fl_Widget* btn, void* userdata) {
    View* gui = static_cast<View*>(userdata);
    std::string inputType(gui->inputType->value());
    std::string inputName(gui->inputName->value());
    gui->data.push_back(Data(inputType, inputName));
    gui->browser->add((inputName+" : "+inputType).c_str());
  }

  // Funcao callback chamada quando selecionada uma linha no Fl_Browser
  static void cbBrowser(Fl_Widget* btn, void* userdata) {
    View* gui = static_cast<View*>(userdata);
    int index = gui->browser->value(); // 1-based index
    gui->inputType->value(gui->data[index-1].getType().c_str());
    gui->inputName->value(gui->data[index-1].getName().c_str());
  }

  // Funcao callback chamada quando pressionado botao 'Update'
  static void cbBtnUpdate(Fl_Widget* btn, void* userdata) {
    View* gui = static_cast<View*>(userdata);
    int index = gui->browser->value(); // 1-based index
    std::cout << index << std::endl;
    if (index > 0) {
      std::string inputName(gui->inputName->value());
      std::string inputType(gui->inputType->value());
      gui->data[index-1].setName(inputName);
      gui->data[index-1].setType(inputType);
      std::cout << inputName << std::endl;
      gui->browser->text(index,(inputName+" : "+inputType).c_str());
    }
  }

  // Funcao callback chamada quando pressionado botao 'Delete'
  static void cbBtnDelete(Fl_Widget* btn, void* userdata) {
    View* gui = static_cast<View*>(userdata);
    int index = gui->browser->value(); // 1-based index
    std::cout << index << std::endl;
    if (index > 0) {
      std::string inputName(gui->inputName->value());
      std::string inputType(gui->inputType->value());
      gui->data.erase(gui->data.begin() + index-1);
      gui->browser->remove(index);
    }
  }
};

int main() {
  View gui;
  gui.show();
  return Fl::run();
}


