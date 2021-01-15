/*#include <iostream>
#include "struct.h"
#include "Variables.h"
#include <string>
#include "Rooms.h"

using namespace std;


string Rooms::gotoBedroom()
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
}*/