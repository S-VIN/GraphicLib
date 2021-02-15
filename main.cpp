#include "headers/printer.h"
#include "headers/vector.h"
#include <SFML/Graphics.hpp>

using namespace std;

Printer printer;
Vector v;
void print();


int main(){

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
  Square* sqr = new Square({10, 15}, 5);
  Square* sqr1 = new Square({50, 50}, 1);
  v.addFigure(sqr);
  v.addFigure(sqr1);
  printer.clearScreen();
  for(int i = 0; i < 100; i++){
    for(int j=0; j < 100; j++){
      if(v.isFilled({i, j})){
        printer.setPixel(i, j, Color::Red);
      }
    }
  }
  printer.show();
  delete sqr1;
  delete sqr;
  v.deleteFigure(0);
  v.deleteFigure(0);


 }


