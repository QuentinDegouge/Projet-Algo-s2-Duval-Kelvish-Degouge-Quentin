//
// Created by Quentin Degouge on 21/04/2024.
//

#ifndef UNTITLED3_CDATAFRAME_H
#define UNTITLED3_CDATAFRAME_H

/**
* @brief: Création d’un CDataframe vide
* @param:  nom du CDataframe
*/
void? createCDataframe(nom) ;

/**
* @brief: Remplissage du CDataframe à partir de saisies utilisateurs
* @param:  valeures à intégrer dans le Cdataframe
*/
void? userfill(val) ;

/**
* @brief: Remplissage du CDataframe en dure
* @param:  valeures à intégrer dans le Cdataframe
*/

/****JSP quoi mettre comme fonction ici

/**
* @brief: Afficher tout le CDataframe
* @param:  Cdataframe à afficher
*/
void? fullprint(DATAFRAME) ;

/**
* @brief: Afficher une partie des lignes du CDataframe selon une limite fournie par l’utilisateur
* @param1:  début de l'interval à afficher
* @param2:  Fin de l'interval à afficher
*/
void? printligne(y1,y2) ;

/**
* @brief: Afficher une partie des collones du CDataframe selon une limite fournie par l’utilisateur
* @param1:  début de l'interval à afficher
* @param2:  Fin de l'interval à afficher
*/
void? printcollone(x1,x2) ;

/**
* @brief: Ajouter une ligne de valeurs au CDataframe
* @param:  ligne à ajouter
*/
void? addligne(ligne) ;

/**
* @brief: supprimer une ligne de valeurs au CDataframe
* @param:  ligne à ajouter
*/
void? delligne(ligne) ;


/**
* @brief: Ajouter une collone de valeurs au CDataframe
* @param:  collone à ajouter
*/
void? addcollone(collone) ;


/**
* @brief: supprimer une collone de valeurs au CDataframe
* @param:  collone à ajouter
*/
void? delcollone(collone) ;

/**
* @brief: renomme une collone de valeurs au CDataframe
* @param1:  collone à renommer
* @param2: nouveau nom de la collone
*/
void? renamecollone(collone,nom) ;

/**
* @brief: Vérifier l’existence d’une valeur  dans le CDataframe
* @param:  valeur à vérifier
*/
void? existence(val) ;

/**
* @brief: Accéder la valeur se trouvant dans une cellule du CDataframe en utilisant son
numéro de ligne et de colonne

* @param1:  numéro de ligne
* @param2: numéro de la collone
*/
void? reach(ligne,collone) ;

/**
* @brief: remplacer la valeur se trouvant dans une cellule du CDataframe en utilisant son
numéro de ligne et de colonne

* @param1:  numéro de ligne
* @param2: numéro de la collone
* @param3: nouvelle valeur
*/
void? replace(ligne,collone,val) ;

/**
* @brief: Afficher les noms des colonnes
* @param:  none
*/
void? printname() ;

/**
* @brief: Afficher  le nombre de colonnes
* @param:  none
*/
int printcollone() ;

/**
* @brief: Afficher  le nombre de ligne
* @param:  none
*/
int printligne() ;


/**
* @brief: Retourner le nombre de d’occurrences d’une valeur dans le dataframe
* @param:  valeur à chercher
*/
int nb_occurence(int x) ;


/**
* @brief: Retourner la valeur à la position x
* @param:  position
*/
void position(int x) ;

/**
* @brief: Retourner le nombre de valeurs supérieures à x
* @param:  référence
*/
int  supérieur(int x) ;

/**
* @brief: Retourner le nombre de valeurs inférieures à x
* @param:  référence
*/
int  inférieur(int x) ;

/**
* @brief: Retourner le nombre de valeurs égales à x
* @param:  référence
*/
int  égal(int x) ;





#endif //UNTITLED3_CDATAFRAME_H
