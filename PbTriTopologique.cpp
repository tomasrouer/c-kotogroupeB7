#include <iostream>
#include "PbTriTopologique.hpp"
using namespace std;

PbTriTopologique::PbTriTopologique() {
	gr = new GrapheOriente();
}

void PbTriTopologique::resolution() {
	int j;
	int nb = gr->sommetS.size();
	for (j = 0;j <nb;j++)
	{
		if (gr->nbAtcd(gr->sommetS[j]) == 0)
			candidat.push_back(j);
	}
	int etape = 0;
	while (resultat.size()<nb)
	{
		etape++;
		cout << "etape" << etape<< endl;
		gr->afficher();
		if (candidat.empty()) {
			cout << "Ce probleme n'est pas resoluble" << endl;
		}
		else {
			int i = candidat[0];
			resultat.push_back(gr->sommetS[i]);
			gr->supprimerSommet(i + 1);
			candidat.clear();
			for (j = 0;j < gr->sommetS.size();j++)
			{
				if (gr->nbAtcd(gr->sommetS[j]) == 0)
					candidat.push_back(j);
			}
		}
	}
	cout << "resultat: " << endl;
	for (j = 0;j < nb;j++) {
		cout << " " << resultat[j].getPresentation();
	}
	cout << " " << endl;
}