#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

#define pixelSize 10

using namespace sf;

class Printer : public RenderWindow {
private:
  int resolutionX;
  int resolutionY;
  std::vector<std::vector<Color>> buffer;

  Color getBufferItem(int X, int Y);
  void setBufferItem(int X, int Y, Color item = Color::White);
  void paint(int X, int Y, Color color = Color::Black);
  void printSquare(int Xpos, int Ypos, Color color = Color::White);

public:
  Printer(int X = 100, int Y = 100)
      : RenderWindow(VideoMode(X * pixelSize, Y * pixelSize), "visualisation") {
    resolutionX = X;
    resolutionY = Y;
    buffer.resize(resolutionX, std::vector<Color>(resolutionY));
  }
  
  void setPixel(int x, int y, Color color = Color::White);
  void show();
  void clearScreen();
};
