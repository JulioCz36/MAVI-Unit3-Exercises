#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>
using namespace std;
using namespace sf;


int main() {

	Texture texture;
	Sprite sprite;

	string ruta = ".../assets/fondo.jpg";
	texture.loadFromFile(ruta);
	sprite.setTexture(texture);


	float width = texture.getSize().x;
	float height = texture.getSize().y;

	float escaleX = 800 / width;
	float escaleY = 800 / height;

	sprite.setScale(escaleX, escaleY);

	RenderWindow App(sf::VideoMode(800, 600, 32), "Fondo");

	while (App.isOpen())
	{

		App.clear();

		App.draw(sprite);

		App.display();
	}

	return 0;

}