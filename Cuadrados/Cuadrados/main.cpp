#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>
using namespace std;
using namespace sf;


int main() {

	string ruta_negro = ".../assets/chessb.jpg";
	string ruta_azul = ".../assets/cuad_blue.jpg";
	string ruta_rojo = ".../assets/cuad_red.jpg";
	string ruta_amarillo = ".../assets/cuad_yellow.jpg";

	Texture t_negro, t_azul, t_rojo, t_amarillo;
	t_negro.loadFromFile(ruta_negro);
	t_azul.loadFromFile(ruta_azul);
	t_rojo.loadFromFile(ruta_rojo);
	t_amarillo.loadFromFile(ruta_amarillo);

	float w_negro_azul = t_negro.getSize().x; float h_negro_azul = t_negro.getSize().y;
	float w_rojo = t_rojo.getSize().x; float h_rojo = t_rojo.getSize().y;
	float w_amarillo = t_amarillo.getSize().x; float h_amarillo = t_amarillo.getSize().y;
	
	float escaleX_negro_azul = w_rojo / w_negro_azul;
	float escaleY_negro_azul = h_rojo / h_negro_azul;
	float escaleX_amarillo = w_rojo / w_amarillo;
	float escaleY_amarillo = h_rojo / h_amarillo;

	Sprite s_negro, s_azul, s_rojo, s_amarillo;
	s_negro.setTexture(t_negro);
	s_azul.setTexture(t_azul);
	s_rojo.setTexture(t_rojo);
	s_amarillo.setTexture(t_amarillo);


	s_negro.setScale(escaleX_negro_azul, escaleY_negro_azul);
	s_azul.setScale(escaleX_negro_azul, escaleY_negro_azul);
	s_amarillo.setScale(escaleX_amarillo, escaleY_amarillo);

	s_rojo.setPosition(400 - w_rojo, 300 - h_rojo);
	s_amarillo.setPosition(400, 300 - h_rojo);
	s_azul.setPosition(400 - w_rojo, 300);
	s_negro.setPosition(400, 300);


	RenderWindow App(sf::VideoMode(800, 600, 32), "Fondo");

	while (App.isOpen())
	{

		App.clear();

		App.draw(s_rojo);
		App.draw(s_amarillo);
		App.draw(s_azul);
		App.draw(s_negro);

		App.display();
	}

	return 0;

}