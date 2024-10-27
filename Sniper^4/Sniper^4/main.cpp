#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>
using namespace std;
using namespace sf;


int main() {

	Texture texture;
	Sprite s1, s2, s3, s4;

	string ruta = ".../assets/rcircle.png";

	texture.loadFromFile(ruta);

	s1.setTexture(texture); s2.setTexture(texture);
	s3.setTexture(texture); s4.setTexture(texture);

	float width = texture.getSize().x;
	float height = texture.getSize().y;

	s2.setPosition(800 - width, 0);
	s3.setPosition(0, 600 - height);
	s4.setPosition(800 - width, 600 - height);

	RenderWindow App(sf::VideoMode(800, 600, 32), "Sniper^4");
	
	while (App.isOpen())
	{
		
		App.clear();
		
		App.draw(s1);
		App.draw(s2);
		App.draw(s3);
		App.draw(s4);
		
		App.display();
	}

	return 0;
		
}