g++ -std=c++11 main.cpp window.cxx -lfltk
#Ou
#g++ `fltk-config --cxxflags` main.cpp window.cxx `fltk-config --ldflags`
