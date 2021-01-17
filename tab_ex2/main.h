#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <stdlib.h>

/** \brief demande a l'utilisateur de saisir le nombre de valeurs a entrer
 * \param length longueur max du tableau
 * \return nombre de valeurs souhaitees par l'utilisateur
 */
size_t entree_utilisateur(size_t length);

/** \brief fais la somme des valeurs d'un tableau de taille minimale length
 * \param length taille du tableau
 * \param array tableau rempli de taille definie
 * \return somme des valeurs des cases du tableau de taille minimale length
 */
int somme_des_valeurs(size_t length, int array[length]);

/** \brief fais saisir n valeurs a l'utilisateur et les sauvegarde dans un tableau
 * \param length nombre d'�l�ments int a remplir par l'utilisateur
 * \param array tableau de taille d�finie de type int
 */
void remplir_tableau(size_t length, int array[length]);

/** \brief affiche les cases d'un tableau de type int de longueur minimale length
 * \param length nombre d'�l�ments int a afficher
 * \param array tableau de taille d�finie de type int
 */
void afficher_tableau(size_t length, int array[length]);

/**
 * \brief copie toutes les valeurs strictement positives dans un autre tableau 
 */
int copie_pos(size_t length, int dest[length], const int src[length]);

/**
 * \brief copie toutes les valeurs strictement négatives dans un autre tableau 
 */
int copie_neg(size_t length, int dest[length], const int src[length]);

/** \brief point d'entree du programme
 */
int main(void);

#endif // main.h
