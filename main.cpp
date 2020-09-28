#include "printer.h"
using namespace sf;

void print(Printer &);

int main() {
  Printer printer;
  while (printer.isOpen()) {
    print(printer);
    printer.setPixel(50, 50, Color::Red);
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
  // printer.clearBuffer();
  printer.setPixel(0, 0, Color::Red);
  printer.setPixel(50, 50, Color::Red);
  printer.setPixel(50, 50, Color::Red);
  printer.setPixel(99, 99, Color::Red);
  printer.show();
}