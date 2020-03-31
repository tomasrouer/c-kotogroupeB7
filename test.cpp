#include "compte.hpp"


// Affichage de tous les sommets voisins d un sommet
void AfficherListe(Noeud* ptr)
{
	while (ptr != nullptr)
	{
		cout << " -> " << ptr->val << " ";
		ptr = ptr->suivant;
	}
	cout << endl;
}

int main()
{
	// Tableau des arretes du graphe
	Arrete arretes[] =
	{	// (x, y) represente une arrete de x vers y
		{ 0, 1 }, { 1, 2 }, { 2, 0 }, { 2, 1 },{ 3, 2 }, { 4, 5 }, { 5, 4 }
	};

	// Nombre de sommet du graphe
	int N = 6;

	// Calcul le nombre d arretes
	int n = sizeof(arretes)/sizeof(arretes[0]);

	// Construit le graphe
	Graphe graphe(arretes, n, N);

	// Affichage de la liste d'adjacence
	for (int i = 0; i < N; i++)
	{
		// Affiche étant donné un sommet
		cout << i << " --";

		// Affiche tous les sommets voisins
		printList(graphe.head[i]);
	}

	return 0;
}
