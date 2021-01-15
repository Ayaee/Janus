/*#include <iostream>
#include "struct.h"
#include "Variables.h"
#include <string>
#include "RoomsTest.h"

using namespace std;


string Rooms::gotoBathroom()
{
	while (effy.alive)
	{
		if (command == "cmetr")
			cout << "Tu es dans la salle de bain \n\n";
		else if (command == "observer")
		{
			cout << "Il y a un mirroir ebreche au-dessus d'un évier \n";
			cout << "A ta gauche il y a la douche et les toilettes \n\n";
		}
		else if (command == "miroir")
			cout << "Il y a des marques de brissures sur les bords du miroir, mais il semble que tu puisse l'ouvrir \n\n";
		else if (command == "ouvrir")
			cout << "Il y a de nombreuses fioles contenant divers produits \n\n";
		else if (command == "boire")
		{
			cout << "Lorsque tu avales l'une des fiole tout semble se flouter autour de toi. \n";
			cout << "Malheureusement c'est fiole contenait divers poisons tu aurais du faire plus attention .. \n";
			cout << "GAME OVER \n\n";

			effy.alive = false;
			play = false;
			return "null";
		}

		else if (command == "chambre")
			return command;
		else if (command == "quitter")
			return command;
		else if (command == "mourir")
		{
			effy.alive = false;
			continue;
		}
		else
			cout << "Je ne comprends pas.. \n\n";

			cout << ">";
		getline(cin, command);
	}
	cout << "Tu es morte \n";
	play = false;
	return "null";
}*/