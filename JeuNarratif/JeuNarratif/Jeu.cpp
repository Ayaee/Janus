#include <iostream>
#include <string>
#include "Struct.h"
#include "Rooms.h"
#include "Variables.h"


using namespace std;


bool quitter()
{
	cout << "Es-tu sur ? [ Oui / Non ] \n";
	while (true)
	{
		getline(cin, command);
		if (command == "oui")
			return true;
		if (command == "non")
			return false;
	}
}

int main()
{
	string currentRoom("chambre");
	placeholder = currentRoom;
	do
	{
		if (currentRoom == "chambre")
		{
			placeholder = currentRoom;
			command = "cmetr";
			currentRoom = Rooms::Chambre();
		}
		if (currentRoom == "salle de bain")
		{
			placeholder = currentRoom;
			command = "cmetr";
			currentRoom = Rooms::SalleDeBain();
		}
		if (currentRoom == "couloir")
		{
			placeholder = currentRoom;
			command = "cmetr";
			currentRoom = Rooms::Couloir();
		}
		if (currentRoom == "quitter")
		{
			bool quitVar = quitter();
			if (quitVar)
				play = false;
			if (quitVar == false)
				currentRoom = placeholder;
		}
	}
	while (play);
	return 0;
}