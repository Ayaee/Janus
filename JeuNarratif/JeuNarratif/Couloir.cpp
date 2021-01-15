/*#include <iostream>
#include "struct.h"
#include "Variables.h"
#include <string>
#include "Rooms.h"

using namespace std;


string Rooms::gotoHallway()
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
}*/