// JeuDeDes.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

// Wallet of the user , the money
int wallet = 5;

int somme(int valeur1, int valeur2) {
    return valeur1 + valeur2;
}

// User interaction
bool userQuestionning() {

    char reponse;

    std::cout << "Votre wallet contient " << wallet << " CHF" << std::endl;
    std::cout << "Voulez vous rejouer en doublant ou repartir avec vos gains (o/n) ?" << std::endl;
    std::cin >> reponse;

    if (reponse == 'o') {
        // On a décide de doubler et rejouer
        return true;
    }
    else if (reponse == 'n') {
        std::cout << "Vous avez gagné " << wallet << " CHF" << std::endl;
        return false;
    }
    else {
        // --------------------------------------------------------
        // A traiter plus tard
    }


}

int main()
{
    
    // Initialisation seed du tirage
    srand(time(NULL));

    int scoreCourant;
    int scorePrecedent = 2;

    bool continuer = true;

    // Je tire les dés jusqu'à l'arrêt de l'utilisateur
    do
    {
        // Un tirage
        int tirageDe1 = 1 + (rand() % 6);
        int tirageDe2 = 1 + (rand() % 6);
        scoreCourant = somme(tirageDe1, tirageDe2);

        // Affichage du tirage
        std::cout << "Tirage " << tirageDe1 << ":" << tirageDe2 << std::endl;
        std::cout << "Score courant : " << scoreCourant << std::endl;
        std::cout << "Score precedent : " << scorePrecedent << std::endl;

        // Determiner si j'ai gagné ou perdu 
        if (scoreCourant > scorePrecedent) {

            wallet *= 2;

            std::cout << "Gagne :D" << std::endl;
            scorePrecedent = scoreCourant;

            continuer = userQuestionning();

        }
        else {
            std::cout << "Perdu :(" << std::endl;
            // On perd donc on sort du jeu
            continuer = false;
        }
        
    } while (continuer || wallet > 10000);
    // Le joueur a décidé de s'arréter ou a gagné trop d'argent
}
