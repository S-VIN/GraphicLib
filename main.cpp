#include "printer.h"
using namespace sf;

void print(Printer &);

class VectorPrint {
private:
  Printer * printer;
  struct Point{
    int x;
    int y;
  };
  struct Figure{
    Point point;
    int a;
  };
  std::vector<Figure> mas;
  void printSquare(Figure figure){
    for(int i = figure.point.x; i < figure.point.x + figure.a; i++){
      printer->setPixel(i, figure.point.y);
    }
    for(int i = figure.point.x; i < figure.point.x + figure.a; i++){
      printer->setPixel(i, figure.point.y + figure.a);
    }

    for(int i = figure.point.y; i < figure.point.y + figure.a; i++){
      printer->setPixel(figure.point.x, i);
    }

    for(int i = figure.point.y; i < figure.point.y + figure.a; i++){
      printer->setPixel(figure.point.x + figure.a, i);
    }

  }

public:
  VectorPrint(Printer * printer){
    VectorPrint:: printer = printer;
  }
  void square(Point point, int a){
    mas.push_back(Figure{point, a});
    printSquare(mas[0]);
  }
};



int main() {
  Printer printer;
  while (printer.isOpen()) {
    print(printer);
    sf::Event event;
    while (printer.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        printer.close();
    }
  }
  return EXIT_SUCCESS;
  return 0;
}

void print(Printer &printer) {
  /*printer.clearScreen();
  printer.setPixel(0, 0, Color::Red);
  printer.setPixel(50, 50, Color::Red);
  printer.setPixel(99, 99, Color::Red);
  printer.show();*/

  VectorPrint vectorPrint(&printer);
  vectorPrint.square({50,50}, 10);

}