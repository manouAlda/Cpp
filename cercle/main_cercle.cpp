#include <string>
#include <iostream>

#include "Cercle.h"

int main(){
	srand(time(NULL));
	
	string color[7] = {"Blanc", "Noir", "Orange", "Rouge", "Vert", "Bleu", "Jaune"};
	int nbr = ( rand() % 6) + 2 ;
	int rayon = 0;
	double x = 0;
	double y = 0;
	int couleur = 0;
	
	Point p;
	Cercle circ[nbr];
	
	pair<double, double> vecteurTranslation ;
	bool continu=0;
	
	cout << "Nombres de cercle : " << nbr <<endl;
	cout << "*****************" << endl<< endl;
	
	for(int i=0; i<nbr; i++){
		x = ( rand() % 11);
		y = ( rand() % 11);
		
		p.setX(x);
		p.setY(y);
		
		rayon = ( rand() % 5)+1;
		couleur = ( rand() % 7) ;
		
		circ[i] = Cercle(p);
		circ[i].setRayon(rayon);
		circ[i].setCouleur(color[couleur]);
		
		cout << "Cercle " << i+1 << ": " << circ[i].getCouleur() << endl;
		cout << "Rayon : " << circ[i].getRayon() <<endl;
		cout << "Coordonnee : (" << circ[i].getCoordonneesX()<< ", " << circ[i].getCoordonneesY()<< ")" << endl<<endl;
		
	}
	
	traitement:
	for (int i=0; i<nbr-1; i++){
		for (int j=i+1; j<nbr; j++){
			if (circ[i].estEcraser(circ[j])==1) {
                cout << "Les cercles " << i+1 << " et " << j+1 << " se superposent." << endl ;
                
                cout << "Coordonnées du cercle " << i + 1 << " : (" << circ[i].getCoordonneesX() << ", " << circ[i].getCoordonneesY() << ")" << endl;
                cout << "Coordonnées du cercle " << j + 1 << " : (" << circ[j].getCoordonneesX() << ", " << circ[j].getCoordonneesY() << ")" << endl;
              
                vecteurTranslation = circ[i].deplacer_cercle(circ[j]);
                
                cout << "Vecteur de translation : (" << vecteurTranslation.first << ", " << vecteurTranslation.second << ")" << endl;
                
                cout << "Nouvelles coordonnées du cercle " << i + 1 << " : (" << circ[i].getCoordonneesX() << ", " << circ[i].getCoordonneesY() << ")" << endl <<endl;
                
            } else {
                cout << "Les cercles " << i+1 << " et " << j+1 << " ne se superposent pas." << endl<<endl;
            }
		}
	}
	
	continu = verifier_position (circ, nbr);
	if(continu)		goto traitement;
	else {
		cout << "Les cercles sont correctement positionnés." << endl;
		cout << "*****************************************" << endl<< endl;
		for(int i=0; i<nbr; i++){
			cout << "Cercle " << i+1 << ": " << circ[i].getCouleur() << endl;
			cout << "Rayon : " << circ[i].getRayon() <<endl;
			cout << "Coordonnee : (" << circ[i].getCoordonneesX()<< ", " << circ[i].getCoordonneesY()<< ")" << endl<<endl;
		}
	}
	
	return 0;
}
