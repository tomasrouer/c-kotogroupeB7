#ifndef ARC_H_
#define ARC_H_

/*!
 * \file Arc.hpp
 * \brief arc(arete) de graphe
 * \author GroupeB7
 * \version 0.1
 */
#include <string>
#include "Sommet.hpp"


    /*! \class Arc
     * \brief classe representant l'arc
     */
    class Arc
    {
    private:
        Sommet sommet1;/*!< Sommet de depart*/
        Sommet sommet2;/*!< Sommet d'arrivee*/
        int longueur; /*!< longueur de l'arc */


    public:
        /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe Arc
         *
         */
        Arc(Sommet s1, Sommet s2);



    public:
        /*!
         *  \brief Lecture du premier sommet
         */
        Sommet getPremierSommet();
            /*!
             *  \brief Lecture du second sommet
             */
        Sommet getSecondSommet();
        /*!
         *  \brief Lecture de la longueur
         *
         *  \return valeur de la longueur
         */
        int getLongueur();

        /*!
         *  \brief Modification de la longueur
         *
         *  \param l : nouvelle longueur
         */
        void setLongueur(int l);

        /*!
         *  \brief Lecture de la presentation
         *
         *  \return la chiane de charactere pour la presentation
         */
    };
#endif