/*#include <iostream>
#include <string>
using namespace std;


// Structure pour présenter une page du jeu, page où le texte s'imprimera, puis demande de l'utilisateur pour dire ce qu'il veut faire ensuite.
// Les pagens mènent vers d'autres pages selon les choix sélectionnés
// Ou alors direction "fin de partie"

struct Page
{
    string text;    // Texte affiché au joueur
    int options;    // Nombre d'options disponibles, si 0 indique que le joueur est mort ou à finit
    int nextpage[10];   // Page suivante en fonction du choix fait par le joueur
};


// LES DONNEES
// Définition de toutes les pages.

const Page gamePages[] = {
    // Page 0:  Début Jeu
    {
        "Bienvenue dans votre aventure, il se peut que ce ne soit pas la première fois que tu viens ici..  Quel personnage voulez-vous incarner ?\n"
        "(1 pour Ethan, 2 pour Effy)\n",
        2,                              // Nombre option
        {1,4}                           // 1 = Page 1
                                        // 2 = Page 4
    },

    // Page 1:  Ethan
    {
        "Tu as choisis Ethan.\n"
        "Bienvenue dans l'univers de Janus.\n"
        "Tu viens de te matérialiser dans ce qui te semble être une grande place, il y a en face de toi une hotesse qui semble te fixer calmement, veux-tu aller lui parler ? (1 pour Oui, 2 pour Non)\n",
        2,                              // 2 options
        {2,3}                           // 1 = page 2
                                        // 2 = page 3
    },

    // Page 2:  Ethan, approche vers l'hotesse
    {
        "Tu demandes à la femme qui elle peut bien être, celle-ci vous regarder en souriant\n"
        "Tu réitére l'opération en lui demandant si elle peut au moins te dire ou tu te trouves, cette fois elle acquiesce et t'indique qu'elle le peut à condition que tu trouves dans quelle main se trouve la piece d'or\n"
        "Répond juste et je pourrais t'indiquer ou tu te trouve, dans quelle main est la piece ? (1 pour Gauche, 2 pour Droite)\n",
        2,
        {0,0}                           // 1 = ?
                                        // 2 = Page 0
    },

    // Page 3:  Ethan, s'éloigne de l'hotesse
    {
        "Tu t'éloigne avec beaucoup de méfiance de la femme, celle-ci secoue la tête et appuie sur un bouton, monde qui t'entoure semblent s'effacer peu à peu..\n"
        "Echec. Tu voulais vraiment t'en sortir seul ?",
        0,                      // échec du jeu
        {}
    },

    // Page 4:  Effy
    {
        "Tu as choisis Effy.\n"
        "Bienvenue dans l'univers de Janus.\n"
        "Sans comprendre pourquoi tu entends un homme crier ton nom, sans savoir ou tu es tu te retournes et vois un grand homme qui cours à toute vitesse vers toi, tu peux essayer de fuir ou trouver ou te cacher. (1 pour Fuite, 2 pour Cacher)\n",
        2,
        {5,0}       // 1 -> page 5
                    // 2 -> ?
    },

    // Page 5:  Effy, fuite
    {
        "Alors que tu t'enfuis le plus vite que tu peux, tu traverse un chemin c'est alors que tu entends derriere toi un bruit sourd, en te retournant tu vois alors étendu sur le sol l'homme qui te poursuivait gisant sur le sol parsemé de marque indiquant qu'on lui a rouler dessus.\n"
        "Tu ne comprends pas ce qu'il a pu se passer mais en t'approchant tu vois qu'il tient dans ses main une carte nommée Centre ainsi qu'une petite clef.\n"
        "Ne sachant pas ou tu es veut tu essayer de te rendre à cet endroit ? (1 pour Oui, 2 Pour Non)\n",
        2,
        {0,0}       // TODO - fill in next pages
    }
};


// Code

int doPage(int page)
{
    cout << gamePages[page].text;

    // Si plus d'option jeu fini
    if (gamePages[page].options <= 0)
        return -1;

    // selection
    int selection;
    cin >> selection;

    // selection valide
    while (selection < 1 ||                    // invalide si inférieur à 1
        selection > gamePages[page].options     // ou si plus grande que le nombre d'options disponible
        )
    {
        cout << "Ce choix n'est pas possible.  Ressaye.\n";
        cin >> selection;
    }

    // their selection is valid.... so return the next page number to go to
    return gamePages[page].nextpage[selection - 1];  // note we have to subtract 1 here
                                                    // because our selection ID starts at 1
                                                    // but array indexes start at 0
}


// MAIN
// doPage gere la logique tant que l'utilisateur n'a pas fini il continue d'appeler

int main()
{
    int currentPage = 0;        // start at page 0

    while (currentPage >= 0)     // as long as they don't have game over...
    {
        //... do a page
        currentPage = doPage(currentPage);
    }

    return 0;
}*/