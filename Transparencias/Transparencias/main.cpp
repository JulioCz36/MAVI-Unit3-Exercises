#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>
using namespace std;
using namespace sf;


int main() {

	Texture texture, texture_azul;
	Sprite s1, s2, s3, s4, c_azul;

	string ruta = ".../assets/rcircle.png";
	string ruta_a = ".../assets/circulo_azul.png";

	texture.loadFromFile(ruta);
	texture_azul.loadFromFile(ruta_a);

	s1.setTexture(texture); s2.setTexture(texture);
	s3.setTexture(texture); s4.setTexture(texture);
	c_azul.setTexture(texture_azul);

	float width = texture.getSize().x;
	float height = texture.getSize().y;

	s2.setPosition(800 - width, 0);
	s3.setPosition(0, 600 - height);
	s4.setPosition(800 - width, 600 - height);

	float width_azul = texture_azul.getSize().x;
	float height_azul = texture_azul.getSize().y;

	c_azul.setPosition(400 - (width_azul/2), 300 - (height / 2));

	RenderWindow App(sf::VideoMode(800, 600, 32), "Transparencias");

	while (App.isOpen())
	{

		App.clear();

		App.draw(s1);
		App.draw(s2);
		App.draw(s3);
		App.draw(s4);
		App.draw(c_azul);

		App.display();
	}

	return 0;

}