#include "printer.h"
#include "vector.h"
using namespace sf;

Printer printer;
Vector v;

void print();


int main() {
  
  while (printer.isOpen()) {
    print();
    sf::Event event;
    while (printer.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        printer.close();
    }
  }
  return EXIT_SUCCESS;
  return 0;
}

void print() {
  v.addSquare({50,50}, 5);
  v.addSquare({5,10}, 10);
  printer.clearScreen();
  for(int i = 0; i < 100; i++){
    for(int j=0; j < 100; j++){
      if(v.isFilled({i, j})){
        printer.setPixel(i, j, Color::Red);
      }
    }
  }
  printer.show();
}


