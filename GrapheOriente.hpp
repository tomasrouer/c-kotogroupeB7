#ifndef GRAPHEORIENTE_H_
#define GRAPHEORIENTE_H_

/*!
 * \file GrapheOriente.hpp
 * \brief un graphe oriente 
 * \author GroupeB7
 * \version 0.1
 */
#include <string>
#include "Graphe.hpp"

    /*! \class GrapheOriente
     * \brief classe representant le graphe oriente
     *  Sous-classe de Classe Graphe
     */
    class GrapheOriente : public Graphe
    {
    /*! 
     * Elle n'a pas plus de attribus que Graphe general
     */


    public:
        /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe GrapheOriente
         *
         *  Afficher un message d'erreur si les deux ensembles ne sont pas compatibles
         */
        GrapheOriente();



    public:
        void initialiser();
        /*!
         *  \brief Affichage sous forme matricielle du graphe
         *
         */
        void afficher();
        /*!
         *  \brief Nombre d'antecedant d'un sommet
         *
         *  \return la valeur du nombre d'antecedant du sommet
         */
        int nbAtcd(Sommet s);
        /*!
         *  \brief Ajouter un arc au graphe
         *
         * Afficher un message d'erreur si l'arc existe deja
         */
        void ajouterArc(Sommet s1, Sommet s2, int longueur);
        /*!
         *  \brief Les adjacents d'un sommet
         *
         *  \return la liste des sommets qui sont adjacents du sommet
         */
        std::vector<Sommet> listeAjc(Sommet s);
        /*!
         *  \brief l'algorithme dfs oriente
         *
         * Parcours en profondeur pour le graphe oriente,
         * si le graphe est non oriente, cette methode est
         * la meme que dfs
         */
        void dfsOriente(int i);

    };

#endif