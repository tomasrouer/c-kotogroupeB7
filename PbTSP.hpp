#ifndef PBTSP_H_
#define PBTSP_H_

/*!
 * \file PbTSP.hpp
 * \brief un probleme du voyageur de commerce
 * \author GroupeB7
 * \version 0.1
 */
#include "GrapheNonOriente.hpp"
#define maxNb 10000
#define maxV 100

    /*! \class PbTSP
     * \brief classe representant un probleme du voyageur de commerce
     */
    class PbTSP
    {
    public:
        GrapheNonOriente* gr; /*!< Ensemble de villes et de distances, l'entree du probleme*/
        int resultat; /*!< la longueur minimale du chemin, la sortie du probleme*/
    private:
        int villeDepart;  /*!< le depart et la destination*/
        int longueur[maxNb];/*!< stocker les longueurs des chemins*/
        bool visite[maxV];/*!< marquer si la ville est visite*/
        int nbVisite;/*!< nbr de villes deja visites*/
        int chemin[maxNb][maxNb];/*!< stocker les chemins*/
        int Nchemin;/*!< numero du chemin actuel*/


    public:
        /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe PbOrdonnancement
         *
         */
        PbTSP();



    public:
        /*!
        *  \brief Modification de la villeDepart
        *
        */
        void setVilleDepart(int n);
        /*!
         *  \brief Resolution du probleme
         *
         *  Une fonction recursive
         */
        void resolution(int t);
    };

#endif