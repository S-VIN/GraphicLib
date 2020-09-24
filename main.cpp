#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
using namespace sf;


class Printer : public RenderWindow{
private:
    int pixelSize = 10;
    int resolutionX;
    int resolutionY;
    Color* buffer;

    Color getBufferItem(int X, int Y){
        return buffer[Y*resolutionX + X];
    }

    void setBufferItem(int X, int Y, Color item = Color::Black){
        buffer[Y*resolutionX + X] = item;
    }

    void printSquare(int Xpos, int Ypos, Color color = Color::Black){
        RectangleShape rect;
        rect.setSize(Vector2f(pixelSize, pixelSize));
        rect.setPosition(Xpos * pixelSize, Ypos * pixelSize);
        rect.setFillColor(color);
        draw(rect);
        display();
    }



public:
    Printer(int X = 100, int Y = 100) : RenderWindow(VideoMode(X * 10, Y * 10), "visualisation"){
        resolutionX = X;
        resolutionY = Y;
        for(int i = 0; i < Y; i++){
            buffer = new Color[X * Y];
        }
    }

void paint(int X, int Y, Color color = Color::Black){
    printSquare(X, Y, color);
}

void clearBuffer(){
    for(int i = 0; i < resolutionX * resolutionY; i++){
        buffer[i] = Color::White;
    }
}

    void printBuffer(){
        clear();
        for(int i = 0; i < resolutionX; i++)
            for(int j = 0; j < resolutionY; j++){
                printSquare(i, j, Color::Red);
            }
    }



};





int main()
{
    Printer printer;

    printer.clearBuffer();
    printer.paint(50, 50, Color::Magenta);
    for(;;){}
    

    
    return 0;
}

