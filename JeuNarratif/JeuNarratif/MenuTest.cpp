/*#include <cstdlib>
#include <SFML/Graphics.hpp>

using namespace sf;


// Initialisation de la fen�tre de rendu
int main()
{
	RenderWindow app(VideoMode(800, 600, 32), "Janus..", Style::Close | Style::Titlebar); // donne une largeur, une longueur et le type de bits // Nom de fen�tre
	// Si j'en veux une deuxieme  : app.Create(sf::VideoMode(800, 600, 32), "Le retour! ");

	Shape carre;
	carre.AddPoint(200, 200, Color(255, 255, 0), Color(255, 255, 255));
	carre.AddPoint(400, 200, Color(255, 255, 0), Color(255, 0, 0));
	carre.AddPoint(400, 400, Color(255, 255, 0), Color(0, 255, 0));
	carre.AddPoint(200, 400, Color(255, 255, 0), Color(0, 0, 255));
	carre.EnableFill(true); // Remplissage activ�
	carre.EnableOutline(true); // Bordures activ�es
	carre.setOutlineThickness(20); // Bordures de taille 20pixels

	// Boucle principale
	while (app.isOpen()) // La boucle fait tourner le programme tant que la fen�tre est ouverte
	{
		Event event;
		while (app.pollEvent(event))
		{
			if (event.type == Event::Closed)
				app.close(); // Fermeture fen�tre
		}

		// Remplissage de l'�cran (noir d�faut)
		app.clear(); // Chaque tour effacement ancien �cran

		// Affichage carre
		app.draw(carre);

		// Affichage de la fen�tre
		app.display(); // Nouveau rendu
	}
	return EXIT_SUCCESS;
}*/