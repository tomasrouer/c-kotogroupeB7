#include <iostream>
#include <string>
#include "PbTSP.hpp"
#include "PbTritopologique.hpp"
using namespace std;
int main(int argc, char* argv[]) {

	PbTSP* p = new PbTSP();
	GrapheOriente go;
	GrapheNonOriente gn;
	Sommet* s1 = new Sommet("11");
	Sommet* s2 = new Sommet("22");
	Sommet* s3 = new Sommet("33");
	Sommet* s4 = new Sommet("44");
	p->gr->ajouterSommet(*s1);
	p->gr->ajouterSommet(*s2);
	p->gr->ajouterSommet(*s3);
	p->gr->ajouterSommet(*s4);
	p->gr->ajouterArc(*s1, *s2, 3);
	p->gr->ajouterArc(*s1, *s3, 4);
	p->gr->ajouterArc(*s2, *s3, 5);
	p->gr->ajouterArc(*s1, *s4, 5);
	p->gr->ajouterArc(*s2, *s4, 1);
	p->gr->ajouterArc(*s3, *s4, 9);
	p->gr->afficher();
	p->setVilleDepart(4);
	p->resolution(4);
}




