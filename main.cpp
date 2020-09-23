#include <SFML/Graphics.hpp>
#include <vector>
using namespace sf;

/*class Printer{
private:
    RenderWindow* window;
    int resolutionX;
    int resolutionY;
public:
    Printer(RenderWindow* window, int X = 100, int Y = 100){
        Printer: window = window;
        resolutionX = X;
        resolutionY = Y;
    }

    void print(){
        CircleShape shape(100.f, 4);
        shape.setFillColor(sf::Color::Green);
        window->draw(shape);
    }
};*/





int main()
{
    RenderWindow window(VideoMode(99, 100), "SFML works!");
    std::vector<RectangleShape> mas(100*100); 
    for(int i = 0; i < 100 * 100; i++){
        mas[i].setSize(sf::Vector2f(1, 1));
        mas[i].setPosition(i / 100, i % 100);
        if(((i / 100) + (i % 2)) % 2 == 0){
            mas[i].setFillColor(Color::White );
        }else{
            mas[i].setFillColor(Color::Black );
        }
    }

    RectangleShape rectangle;
    

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        for(auto item : mas){
            window.draw(item);
        }
        
        
        window.display();
    }

    return 0;
}

