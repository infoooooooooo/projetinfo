/*Projet info TEI UE 342 2020-2021
 *Sujet: Polynômes
 *Auteurs: Manal Gharrabou
           Mamadou Billo Barry 
 */


#ifndef PROJECTINFO_H
#define PROJECTINFO_H


 
//structure pour defenir un polynome
   struct polynome{  
		int degre;
		double* p_coeff;
 
};


//Créer un polynome nul.
polynome creation_poly_nul (int degre);

//Affectation des coefficients.
polynome affectation_coeff (int degre);

//Affichage d'un polynome.
void afficher_poly (polynome poly);

//Copie de polynôme.
polynome copie_polynome (polynome poly);

//Modification d’un coefficient.
polynome modification_coeff (polynome poly, double* p_coeff, double nouv_val);

//Lecture d’un coefficient.
void lecture_coeff (polynome poly, double* p_coeff);

//Évaluation du polynôme pour une valeur.
double evaluation_poly (polynome poly, double val_X);

//Addition soustraction de deux polynômes.
polynome addition (polynome poly_1, polynome poly_2);

//Multiplication par un scalaire.
polynome multiplication_scalaire (polynome poly, double scal);

//Augmentation du degré (*x).
polynome augmentation_deg (polynome poly);

//Ajout d’un coefficient avec augmentation du degré(multiplication_uniterme).
polynome multiplication_uniterme (polynome poly, double scal, int degre);

//Multiplication de deux polynomes.
polynome multiplication (polynome poly_1, polynome poly_2);

//Calcul de la dérivée.
polynome derive (polynome poly);


   
#endif


