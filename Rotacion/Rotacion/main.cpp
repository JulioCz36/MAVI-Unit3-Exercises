#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>
using namespace std;
using namespace sf;


int main() {

	Texture texture;
	Sprite sprite;

	string ruta = ".../assets/plataforma.jpg";
	texture.loadFromFile(ruta);

	sprite.setTexture(texture);


	float width = texture.getSize().x;
	float height = texture.getSize().y;

	sprite.setPosition(400 - (width / 2), 300 - (height /2));

	RenderWindow App(sf::VideoMode(800, 600, 32), "Rotación");

	while (App.isOpen())
	{

		App.clear();

		sprite.rotate(1.0f);
		
		App.draw(sprite);

		App.display();
	}

	return 0;

}