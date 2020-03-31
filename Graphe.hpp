#include <iostream>
using namespace std;

// Structure de donnee pour stocker la liste d adjacence des noeuds
struct Noeud {
	int val;
	Noeud* suivant;
};

// Structure de donnee pour stocker les arretes du graphe
struct Arrete {
	int src, dest;
};

class Graphe
{
	//attributs

	// Nombre de noeud
	private : int N;  
	// Tableau de pointeur de noued pour representer la liste d adjacence
	private : Node **tete;
	
	//methodes

	// Fonction permetant d allouer un nouveau noeud a la liste d adjacence
	private : Noeud* obtListeAdjNoeud(int dest, Noeud* tete);
	// Constructeur
	private : void Graphe(Arrete arretes[], int n, int N);
	// Destructeur
	private : void ~Graphe();
}

