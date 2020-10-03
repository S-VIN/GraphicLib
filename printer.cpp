#include "printer.h"

Color Printer::getBufferItem(int X, int Y) { return buffer[X][Y]; }

void Printer::setBufferItem(int X, int Y, Color item) { buffer[X][Y] = item; }

void Printer::paint(int X, int Y, Color color) { printSquare(X, Y, color); }

void Printer::printSquare(int Xpos, int Ypos, Color color) {
  RectangleShape rect;
  rect.setSize(Vector2f(pixelSize, pixelSize));
  rect.setPosition(Ypos * pixelSize, Xpos * pixelSize);
  rect.setFillColor(color);
  draw(rect);
}

void Printer::clearScreen() {
  for (int i = 0; i < resolutionX; i++) {
    for (int j = 0; j < resolutionY; j++) {
      buffer[i][j] = Color::Black;
    }
  }
}

void Printer::setPixel(int x, int y, Color color) {
  setBufferItem(x, y, color);
}

void Printer::show() {
  clear();
  for (int i = 0; i < resolutionX; i++)
    for (int j = 0; j < resolutionY; j++) {
      printSquare(i, j, buffer[i][j]);
    }
  display();
}
