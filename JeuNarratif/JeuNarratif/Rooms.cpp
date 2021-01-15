#include <iostream>
#include "Rooms.h"
#include "struct.h"
#include "Variables.h"
#include <string>

using namespace std;


// CHAMBRE

string Rooms::Chambre()
{
	while (effy.alive)
	{
		if (command == "cmetr")
			cout << "Tu es dans la chambre \n\n";

		else if (command == "observer")
		{
			cout << "Il y a deux portes, un lit et un ordinateur dans l'angle \n";
			cout << "Une porte mene a la salle de bain, l'autre au couloir \n\n";
		}

		else if (command == "lit")
			cout << "Tu ne vois pas grand chose \n\n";

		else if (command == "ordinateur")
			cout << "Il semble y avoir un mot de passe requis mais tu ne sais pas lequel \n\n";
		else if (command == "code")
			cout << "L'ordinateur s'allume enfin, il y a des dossiers divers ainsi que des memos \n\n";
		else if (command == "dossier")
			cout << "Il y a un dossier contenant ton nom \n\n";
		else if (command == "memo")
			cout << "Le memo indique ..  \n\n";

		else if (command == "couloir")
			return command;
		else if (command == "salle de bain")
			return command;

		else if (command == "quitter")
			return command;
		else
			cout << "Je ne comprends pas.. \n\n";

		cout << ">";
		getline(cin, command);
	}
};

// COULOIR

string Rooms::Couloir()
{
	while (effy.alive)
	{
		if (command == "cmetr")
			cout << "Tu es dans le couloir \n\n";
		else if (command == "observer")
			cout << "La faible lumiere de la chambre n'éclaire pas grand chose, tu ne vois rien a plus de quelques metres \n\n";
		else if (command == "avancer")
		{
			cout << "Tu avances doucement dans le noir quand tu heurtes ce qu'il te semble etre une porte \n\n A suivre \n\n";
			play = false;
			return "null";
		}
		else if (command == "chambre")
			return command;

		else if (command == "quitter")
			return command;
		else
			cout << "Je ne comprends pas.. \n\n";

		cout << ">";
		getline(cin, command);
	}
}

// SDB

string Rooms::SalleDeBain()
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
			cout << "Malheureusement c'est fiole contenait divers poisons tu aurais du faire plus attention .. \n\n GAME OVER";

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
}

