#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>
using namespace std;
using namespace sf;


int main() {

	Texture blanco, negro;
	Sprite sprite;

	string ruta_b = ".../assets/chessw.png";
	string ruta_n = ".../assets/chessb.png";
	blanco.loadFromFile(ruta_b);
	negro.loadFromFile(ruta_n);

	float width = blanco.getSize().x;
	float height = blanco.getSize().y;
	float escalaX, escalaY;

	escalaX = 100/ width;
	escalaY = 100 / height;
	
	sprite.setScale(escalaX, escalaY);

	RenderWindow App(sf::VideoMode(800, 600, 32), "Ajedrez");

	while (App.isOpen())
	{

		App.clear();

		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {

				if ((i + j) % 2 == 0) {
					sprite.setTexture(blanco);
				}
				else {
					sprite.setTexture(negro);
				}
				sprite.setPosition(j * 100, i * 100);

				App.draw(sprite);
			}
		
		}

		App.display();
	}

	return 0;

}