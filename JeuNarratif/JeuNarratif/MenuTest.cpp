/*#include <cstdlib>
#include <SFML/Graphics.hpp>

using namespace sf;


// Initialisation de la fenêtre de rendu
int main()
{
	RenderWindow app(VideoMode(800, 600, 32), "Janus..", Style::Close | Style::Titlebar); // donne une largeur, une longueur et le type de bits // Nom de fenêtre
	// Si j'en veux une deuxieme  : app.Create(sf::VideoMode(800, 600, 32), "Le retour! ");

	Shape carre;
	carre.AddPoint(200, 200, Color(255, 255, 0), Color(255, 255, 255));
	carre.AddPoint(400, 200, Color(255, 255, 0), Color(255, 0, 0));
	carre.AddPoint(400, 400, Color(255, 255, 0), Color(0, 255, 0));
	carre.AddPoint(200, 400, Color(255, 255, 0), Color(0, 0, 255));
	carre.EnableFill(true); // Remplissage activé
	carre.EnableOutline(true); // Bordures activées
	carre.setOutlineThickness(20); // Bordures de taille 20pixels

	// Boucle principale
	while (app.isOpen()) // La boucle fait tourner le programme tant que la fenêtre est ouverte
	{
		Event event;
		while (app.pollEvent(event))
		{
			if (event.type == Event::Closed)
				app.close(); // Fermeture fenêtre
		}

		// Remplissage de l'écran (noir défaut)
		app.clear(); // Chaque tour effacement ancien écran

		// Affichage carre
		app.draw(carre);

		// Affichage de la fenêtre
		app.display(); // Nouveau rendu
	}
	return EXIT_SUCCESS;
}*/