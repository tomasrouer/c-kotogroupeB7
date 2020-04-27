#ifndef GRAPHE_H_
#define GRAPHE_H_
#define NbMax 100

/*!
 * \file Graphe.hpp
 * \brief un graphe general(on ne sait pas s'il est oriente)
 * \author GroupeB7
 * \version 0.1
 */
#include <string>
#include <vector>
#include "Arc.hpp"

    /*! \class Graphe
     * \brief classe representant le graphe
     */
    class Graphe
    {
    public:
        std::vector<Sommet> sommetS; /*!< Ensemble de sommets*/
        std::vector<Arc> arcS; /*!< Ensemble de sommets */
        int table[NbMax][NbMax]; /*!< Tableau representant des arcs */

    public:
        /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe Graphe
         *
         */
        Graphe();



    public:
        /*!
         *  \brief Initialisation du graphe
         *
         *  Construction du tableau representant des arcs
         *  Methode virtuelle car un arc du graphe non oriente sera dans deux sens
         */
        virtual void initialiser() = 0;

        /*!
         *  \brief Affichage sous forme matricielle du graphe
         *
         *  Methode virtuelle car les presentations par defaut sont differentes
         */
        virtual void afficher()=0;

        /*!
         *  \brief Ajouter un sommet au graphe
         */
        void ajouterSommet(Sommet s);

        /*!
         *  \brief Supprimer le ieme sommet du graphe
         *
         *  On supprime aussi les arcs associe au sommet
         */
        void supprimerSommet(int i);
        /*!
         *  \brief Ajouter un arc au graphe
         *
         * Afficher un message d'erreur si l'arc existe deja
         */
        virtual void ajouterArc(Sommet s1, Sommet s2, int longueur)=0;
        /*!
         *  \brief Supprimer ieme arc du graphe
         *
         */
         void supprimerArc(int i);
        /*!
         *  \brief Determiner si le graphe est connexe

         *  \return true si le graphe est connexe,
         *  false sinon
         */
         bool connexe();
        /*!
         *  \brief l'algorithme dfs

         * Parcours en profondeur
         */
        void dfs(int i);
        /*!
         *  \brief Nombre d'antecedant d'un sommet
         *
         *  \return la valeur du nombre d'antecedant du sommet
         */
        virtual int nbAtcd(Sommet s) = 0;
        /*!
         *  \brief Les adjacents d'un sommet
         *
         *  \return la liste des sommets qui sont adjacents du sommet
         */
        virtual std::vector<Sommet> listeAjc(Sommet s)=0;
        /*!
         *  \brief Les sommets accessibles
         *
         *  \return la liste des sommets qui sont accessibles par le ieme sommet
         */
        std::vector<Sommet> listeAccessible(int i);
        /*!
         *  \brief l'algorithme dfs oriente
         *
         * Parcours en profondeur pour le graphe oriente,
         * si le graphe est non oriente, cette methode est
         * la meme que dfs
         */
        virtual void dfsOriente(int i)=0;

    };

#endif