#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
using namespace sf;

class Printer : public RenderWindow {
private:
  const int pixelSize = 10;
  int resolutionX;
  int resolutionY;
  std::vector <std::vector<Color>> buffer;

  Color getBufferItem(int X, int Y) { return buffer[X][Y]; }

  void setBufferItem(int X, int Y, Color item = Color::White) {
    buffer[X][Y] = item;
  }

  void paint(int X, int Y, Color color = Color::Black) {
    printSquare(X, Y, color);
  }

public:
  Printer(int X = 100, int Y = 100)
      : RenderWindow(VideoMode(X * 10, Y * 10), "visualisation") {
    resolutionX = X;
    resolutionY = Y;
    buffer.resize(resolutionX, std::vector<Color>(resolutionY));
  }

  void printSquare(int Xpos, int Ypos, Color color = Color::White) {
    RectangleShape rect;
    rect.setSize(Vector2f(pixelSize, pixelSize));
    rect.setPosition(Ypos * pixelSize, Xpos * pixelSize);
    rect.setFillColor(color);
    draw(rect);
    display();
  }

  void clearBuffer() {
    for(int i = 0; i < resolutionX; i++)
      for(int j = 0; j < resolutionY; j++){
        buffer[i][j] = Color::Black;
      }
  }

  void setPixel(int x, int y, Color color = Color::White){
    setBufferItem(x, y, color);
  }

  void printBuffer() {
    clear();
    for (int i = 0; i < resolutionX; i++)
      for (int j = 0; j < resolutionY; j++) {
        printSquare(i, j, buffer[i][j]);
      }
  }
};

void print(Printer &printer) {
  printer.setPixel(0, 0, Color::Red);
  printer.setPixel(98, 98, Color::Red);
  printer.printBuffer();
}

int main() {
  Printer printer;
  while (printer.isOpen()) {
      printer.setPixel(0, 0, Color::Red);
  printer.setPixel(98, 98, Color::Red);
  printer.printBuffer();
    sf::Event event;
    while (printer.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        printer.close();
    }
  }
  return EXIT_SUCCESS;
  return 0;
}
