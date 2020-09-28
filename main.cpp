#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
using namespace sf;


class Printer : public RenderWindow{
private:
    const int pixelSize = 10;
    int resolutionX;
    int resolutionY;
    Color* buffer;

    Color getBufferItem(int X, int Y){
        return buffer[Y*resolutionX + X];
    }

    void setBufferItem(int X, int Y, Color item = Color::White){
        buffer[Y*resolutionX + X] = item;
    }





public:
    Printer(int X = 100, int Y = 100) : RenderWindow(VideoMode(X * 10, Y * 10), "visualisation"){
        resolutionX = X;
        resolutionY = Y;
        for(int i = 0; i < Y; i++){
            buffer = new Color[X * Y];
        }
    }

    void printSquare(int Xpos, int Ypos, Color color = Color::White){
        RectangleShape rect;
        rect.setSize(Vector2f(pixelSize, pixelSize));
        rect.setPosition(Ypos * pixelSize, Xpos * pixelSize);
        rect.setFillColor(color);
        draw(rect);
        display();
    }


void paint(int X, int Y, Color color = Color::Black){
    printSquare(X, Y, color);
}


void clearBuffer(){
    for(int i = 0; i < resolutionX * resolutionY; i++){
        buffer[i] = Color::Black;
    }
}


void printBuffer(){
        clear();
        for(int i = 0; i < resolutionX; i++)
            for(int j = 0; j < resolutionY; j++){
                printSquare(i, j, buffer[i,j]);
            }
        }
};



void print(Printer& printer){
    for(int i = 0; i < 100; i++){
        printer.paint(i, i, Color::White);
    }

    printer.paint(51, 51, Color::Red);
}



int main(){
    Printer printer;

    printer.clearBuffer();
    
    
     //printer.paint(49, 49, Color::Red);

    while (printer.isOpen()){
        sf::Event event;
        while (printer.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                printer.close();
        }
        print(printer);
    }
    return EXIT_SUCCESS;
    return 0;
}

