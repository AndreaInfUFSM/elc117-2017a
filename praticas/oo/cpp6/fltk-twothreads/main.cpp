#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include "window.h"

class ThreadView : public UserInterface {
private:
  // Atributos associados a thread 1
  Fl_Text_Buffer *buf1;
  std::thread* t1;
  int count1 = 0;
  bool interrupted1 = false;

  // Atributos associados a thread 2
  Fl_Text_Buffer *buf2;
  std::thread* t2;
  int count2 = 0;
  bool interrupted2 = false;

public:
  
  ThreadView() {
    // Configura area de texto da thread 1: associa Fl_Text_Buffer a Fl_Text_Display
    buf1 = new Fl_Text_Buffer();
    this->textArea1->buffer(buf1);
    // Configura callbacks para botoes associados a thread 1
    btnStart1->callback((Fl_Callback*) cbBtnStart1, (void*)(this));
    btnStop1->callback((Fl_Callback*) cbBtnStop1, (void*)(this));
    //btnStop1->deactivate();

    // Configura area de texto da thread 2: associa Fl_Text_Buffer a Fl_Text_Display
    buf2 = new Fl_Text_Buffer();
    this->textArea2->buffer(buf2);
    // TODO: Configurar abaixo callbacks para botoes associados a thread 2,
    // de forma semelhante aos callbacks configurados acima:
    // - associar btnStart2 a cbBtnStart2
    // - associar btnStop2 a cbBtnStop2

  }
  
  void show() {
    // Mostra janela
    w->show();
  }

  // Funcao executada pela thread 1
  void run1() {
    std::string msg;
    // Condicao de parada setada pela thread que executa callback do botao stop
    while (!interrupted1) {
      msg = "Counting: " + std::to_string(count1) + "\n";
      textArea1->insert(msg.c_str());
      count1++;
      std::this_thread::sleep_for(std::chrono::seconds(1));
    }
  }
  // TODO: Criar run2 semelhante a run1
  // Atencao: esta thread devera usar textArea2, count2 e interrupted2
  
  // Funcao chamada quando pressionado botao Start da thread 1
  static void cbBtnStart1(Fl_Widget* btn, void* userdata) {
    ThreadView* gui = static_cast<ThreadView*>(userdata);
    gui->interrupted1 = false;
    // Cria thread
    gui->t1 = new std::thread(&ThreadView::run1, gui);
  }

  // Funcao chamada quando pressionado botao Stop da thread 1
  static void cbBtnStop1(Fl_Widget* btn, void* userdata) {
    ThreadView* gui = static_cast<ThreadView*>(userdata);
    gui->interrupted1 = true;
    // (memory leak) nao podemos fazer delete gui->t1 sem
    // ter certeza de que thread 1 terminou
  }

  // TODO: Criar cbBtnStart2 semelhante a cbBtnStart1
  // Devera usar t2, interrupted2, run2
  
  // TODO: Criar cbBtnStop2 semelhante a cbBtnStop2
  // Devera usar interrupted2
};

int main() {
  ThreadView gui;
  gui.show();
  return Fl::run();
}


