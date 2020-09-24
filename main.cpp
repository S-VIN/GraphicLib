#include <SFML/Graphics.hpp>
#include <vector>
using namespace sf;


class Printer : public RenderWindow{
public:
    int resolutionX;
    int resolutionY;
public:
    Printer(int X = 1000, int Y = 1000) : RenderWindow(VideoMode(X, Y), "visualisation"){
        resolutionX = X;
        resolutionY = Y;
    }

};





int main()
{
    

    Printer printer();
    std:: cout << printer.resolutionX;
    std::vector<RectangleShape> mas(100*100); 
    for(int i = 0; i < 100 * 100; i++){
        mas[i].setSize(sf::Vector2f(10, 10));
        mas[i].setPosition(i / 10, (i % 100)*10);
        if(((i / 100) + (i % 2)) % 2 == 0){
            mas[i].setFillColor(Color::White );
        }else{
            mas[i].setFillColor(Color::Black );
        }
    }

    RectangleShape rectangle;
    

    /*while (printer.isOpen())
    {
        sf::Event event;
        while (printer.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                printer.close();
        }

        printer.clear();
        for(auto item : mas){
            printer.draw(item);
        }
        
        
        printer.display();
    }*/

    return 0;
}

