#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <time.h>
#include <iostream>
#include <iostream>
using namespace std;
using namespace sf;

int num = 0;
int main()
{   //random
    srand(time(0));
    RenderWindow window(VideoMode(800, 600), "Snake Game!");
    window.setFramerateLimit(60);
   //SOUND
    sf::Music music;
    if (!music.openFromFile("images/bpm.wav"))
    {
        cout << "error music \n";
    }
     music.play();

    Texture t1 ,t2,t3,t4,t5;
    t1.loadFromFile("images/2.jpg");
    t2.loadFromFile("images/sam5.png");
    t3.loadFromFile("images/newpng.png");
    t4.loadFromFile("images/taba.png");
    t5.loadFromFile("images/sam5Sgera.png");

    Sprite sprite1(t1) , sma5(t2) , 
        newSam5(t3), newSam51(t3),newSam52(t3),
        newSam53(t3) ,newSam54(t3), newSam55(t3),
         sam5Sgera(t5), sam5Sgera1(t5), sam5Sgera2(t5),
        sam5Sgera3(t5), sam5Sgera4(t5), sam5Sgera5(t5),
              taba(t4), taba1(t4),taba2(t4);
     sma5.setScale(Vector2f(.4, .4));
     sma5.setPosition(800, 200);
     // newSam5
     newSam5.setScale(Vector2f(.2, .2));
     newSam5.setPosition(500, 100);

     newSam51.setScale(Vector2f(.2, .2));
     newSam51.setPosition(650, 250);

     newSam53.setScale(Vector2f(.2, .2));
     newSam53.setPosition(200, 200);
     
     newSam54.setScale(Vector2f(.2, .2));
     newSam54.setPosition(430, 60);

     newSam55.setScale(Vector2f(.2, .2));
     newSam55.setPosition(630, 300);

     newSam52.setScale(Vector2f(.4, .4));
     newSam52.setPosition(140, 290);

     taba.setScale(Vector2f(.2, .2));
     taba.setPosition(500, 300);
     
     taba1.setScale(Vector2f(.2, .2));
     taba1.setPosition(300, 200);
     
     taba2.setScale(Vector2f(.2, .2));
     
    // sam5Sgera

     sam5Sgera.setScale(Vector2f(.3, .3));
     sam5Sgera.setPosition(400, 100);
     
     sam5Sgera2.setScale(Vector2f(.3, .3));
     sam5Sgera2.setPosition(490, 350);
     
     sam5Sgera3.setScale(Vector2f(.3, .3));
     sam5Sgera3.setPosition(800, 50);

     sam5Sgera4.setScale(Vector2f(.3, .3));
     sam5Sgera4.setPosition(500, 400);

     sam5Sgera5.setScale(Vector2f(.3, .3));
     sam5Sgera5.setPosition(100, 250);

     sam5Sgera1.setScale(Vector2f(.3, .3));
     sam5Sgera1.setPosition(700, 450);
     ////SOUND
     //sf::Sound sound;
     //sound.setBuffer(buffer);

    while (window.isOpen())
    {     //random 
        srand(time(0));
        Event e;
        while (window.pollEvent(e))
        {
            if (e.type == Event::Closed)
                window.close();
        }
        if (Keyboard::isKeyPressed(Keyboard::Left)) sma5.move(-2.f,0.0f);
        if (Keyboard::isKeyPressed(Keyboard::Right)) sma5.move(1.6f, 0.0f);
        if (Keyboard::isKeyPressed(Keyboard::Up)) sma5.move(0.0f, -1.6f);
        if (Keyboard::isKeyPressed(Keyboard::Down)) sma5.move(0.0f, 1.6f);
        //Left Collision
        if (sma5.getPosition().x < 0.0)
        {
            sma5.setPosition(0, sma5.getPosition().y);
        }

        //Top Collision
        if (sma5.getPosition().y < 0)
        {
            sma5.setPosition(sma5.getPosition().x, 0);
        }

        //Right Collision
        if (sma5.getPosition().x + sma5.getGlobalBounds().width > window.getSize().x)
        {
            sma5.setPosition(window.getSize().x - sma5.getGlobalBounds().width, sma5.getPosition().y);
        }

        //Bottom Collision
        if (sma5.getPosition().y + sma5.getGlobalBounds().height > window.getSize().y)
        {
            sma5.setPosition(sma5.getPosition().x, window.getSize().y - sma5.getGlobalBounds().height);
        }

        //newSam5

        if (sma5.getGlobalBounds().intersects(newSam5.getGlobalBounds())==true)
        {
            newSam5.setPosition(900, 900);
            int b = (rand() % 650) + 20, a = (rand() % 450) + 35;

            taba1.setPosition(a, b);

            sma5.setScale(sma5.getScale() + Vector2f(.04, .04));
        }


        if (sma5.getGlobalBounds().intersects(newSam51.getGlobalBounds()) == true)
        {
            int b = (rand() % 750) + 20, a = (rand() % 550) + 35;

            taba.setPosition(a, b);
            newSam51.setPosition(900, 900);
            sma5.setScale(sma5.getScale() + Vector2f(.03, .03));
        }


        if (sma5.getGlobalBounds().intersects(newSam52.getGlobalBounds()) == true)
        {
            newSam52.setPosition(900, 900);
            sma5.setScale(sma5.getScale() + Vector2f(.02, .02));
        }

        if (sma5.getGlobalBounds().intersects(newSam53.getGlobalBounds()) == true)
        {
            newSam53.setPosition(900, 900);
            sma5.setScale(sma5.getScale() + Vector2f(.02, .02));
        }
        if (sma5.getGlobalBounds().intersects(newSam54.getGlobalBounds()) == true)
        {
            newSam54.setPosition(900, 900);
            sma5.setScale(sma5.getScale() + Vector2f(.02, .02));
        }
        if (sma5.getGlobalBounds().intersects(newSam55.getGlobalBounds()) == true)
        {
            newSam55.setPosition(900, 900);
            sma5.setScale(sma5.getScale() + Vector2f(.02, .02));
        }

        //sam5Sgera

        if (sma5.getGlobalBounds().intersects(sam5Sgera.getGlobalBounds()) == true)
        {
            sam5Sgera.setPosition(900, 900);

            int b = (rand() % 750) + 20, a = (rand() % 550) + 35;
            
            taba1.setPosition(a, b);

            sma5.setScale(sma5.getScale() + Vector2f(.01, .01));
        }

        if (sma5.getGlobalBounds().intersects(sam5Sgera1.getGlobalBounds()) == true)
        {
            sam5Sgera1.setPosition(900, 900);
            sma5.setScale(sma5.getScale() + Vector2f(.01, .01));
        }


        if (sma5.getGlobalBounds().intersects(sam5Sgera2.getGlobalBounds()) == true)
        {
            sam5Sgera2.setPosition(900, 900);
            sma5.setScale(sma5.getScale() + Vector2f(.01, .01));
        }

        if (sma5.getGlobalBounds().intersects(sam5Sgera3.getGlobalBounds()) == true)
        {
            sam5Sgera3.setPosition(900, 900);
            sma5.setScale(sma5.getScale() + Vector2f(.01, .01));
        }

        if (sma5.getGlobalBounds().intersects(sam5Sgera4.getGlobalBounds()) == true)
        {
            sam5Sgera4.setPosition(900, 900);
            sma5.setScale(sma5.getScale() + Vector2f(.01, .01));
        }

        if (sma5.getGlobalBounds().intersects(sam5Sgera5.getGlobalBounds()) == true)
        {
            sam5Sgera5.setPosition(900, 900);
            sma5.setScale(sma5.getScale() + Vector2f(.01, .01));
        }

        if (sma5.getGlobalBounds().intersects(taba.getGlobalBounds()) == true) {
            /*sound.play();*/
            window.close();
        }
        if (sma5.getGlobalBounds().intersects(taba1.getGlobalBounds()) == true) {
           
            /*sound.play();*/
            window.close();
        }
        if (sma5.getGlobalBounds().intersects(taba2.getGlobalBounds()) == true) {
           
            /*sound.play();*/
            window.close();
        }
        ////// draw  ///////
        window.clear();
       /* music.play();*/
        window.draw(sprite1);
        window.draw(sma5);
        window.draw(newSam5);
        window.draw(newSam51);
        window.draw(newSam52);
        window.draw(newSam53);
        window.draw(newSam54);
        window.draw(newSam55);
        window.draw(sam5Sgera);
        window.draw(sam5Sgera1);
        window.draw(sam5Sgera2);
        window.draw(sam5Sgera3);
        window.draw(sam5Sgera4);
        window.draw(sam5Sgera5);

        window.draw(taba);
        window.draw(taba1);
        window.draw(taba2);
        window.display();
    }
    return 0;
}