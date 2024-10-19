#include <SFML/Graphics.hpp>
#include <time.h>
using namespace sf;
int main()
{
int ts = 54; //tile size
Vector2i offset(48,24);
   srand(time(0));
    RenderWindow app(VideoMode(740,480), "Menagerie");
    app.setFramerateLimit(60);
    Texture t1,t2;
    t1.loadFromFile("sprites/background.png");
    t2.loadFromFile("sprites/animals.png");
    Sprite background(t1), gems(t2);
    Event e;
    while (app.isOpen()){
    while (app.pollEvent(e)){
    if (e.type == Event::Closed)
                app.close();
                if (e.type == Event::MouseButtonPressed)
                if (e.key.code == Mouse::Left){
        //code of action to be performed on mouse click        
                }
                }
    app.draw(background);     
    app.draw(gems);    
    app.display();
    }
    return 0;
}



