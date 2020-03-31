#include "Graphe.hpp"
#include <iostream>
using namespace std;

struct Noeud {
	int val;
	Noeud* suivant;
};

struct Arrete {
	int src, dest;
};

Noeud* obtListeAdjNoeud(int dest, Noeud* tete)
	{
		Noeud* nouveauNoeud = new Noeud;
		nouveauNoeud->val = dest;
		nouveauNoeud->suivant = tete;
		return nouveauNoeud;
	}

Graphe(Arrete arretes[], int n, int N)
	{
		tete = new Noeud*[N]();
		this->N = N;

		// Initialisation de la tete du pointeur pour chaque sommet
		for (int i = 0; i < N; i++)
			tete[i] = nullptr;

		// Ajour des arretes
		for (unsigned i = 0; i < n; i++)
		{
			int src = arretes[i].src;
			int dest = arretes[i].dest;

			// insertion au debut
			Noeud* nouveauNoeud = obtListeAdjNoeud(dest, tete[src]);

			tete[src] = nouveauNoeud;

			// Pour des graphes non orientes :
			/*
			newNode = getAdjListNode(src, head[dest]);

			// Change la tete du pointeur veur ne nouveau noeud
			head[dest] = newNode;
			*/
		}
	}

	// Destructeur
	~Graphe() {
		for (int i = 0; i < N; i++)
			delete[] tete[i];

		delete[] tete;
	}
};
