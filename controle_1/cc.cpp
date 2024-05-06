//
// Created by baddi on 6/5/2024.
//
#include "iostream"
#include "vector"
#include "string"

using namespace std;


// reponse q1
class Joueur{
private:
    string nom;
    int numero;
    int anneeNaissence;
    string poste;
//

public:
    // reponse q2
    Joueur( string nom, int numero, int anneeNaissence, string poste):
    nom(nom), numero(numero), anneeNaissence(anneeNaissence), poste(poste){}
//
// reponse q3
    Joueur( const Joueur &j):
            nom(j.nom), numero(j.numero), anneeNaissence(j.anneeNaissence), poste(j.poste){}

            //

            // reponse q4
    void afficherDetails( ) {
        cout << "nom : " << nom << "  numero : " << numero <<
             " anneeNaissence : " << anneeNaissence << " poste " << poste << endl;
    }
//

// reponse q5
    bool operator == (const Joueur &j) {
        return (nom == j.nom && numero == j.numero && anneeNaissence == j.anneeNaissence && poste == j.poste);
    }

    bool friend operator == (const Joueur &j, const Joueur &c) {
        return (c.nom == j.nom && c.numero == j.numero && c.anneeNaissence == j.anneeNaissence && c.poste == j.poste);
    }

    int getAnneeNaissence(){
        return anneeNaissence;
    }

    //
};

class Equipe{
private:
    string nom;
    vector<Joueur> joueurs;
    int score;

public:
    Equipe(string nom) : nom(nom), score(0){}

    void ajouterJoueur(const Joueur &joueur){
        joueurs.push_back(joueur);
    }

    void suprimerJoueur(const  vector<Joueur> js){
       for(Joueur j : js){
           int indexjtodelete;
           int i=0;
           for(Joueur ji : joueurs){
               if(ji==j) indexjtodelete=i;
               i++;
           }
           joueurs.erase(joueurs.begin() + i);
       }
    }

    void afficherDetails( ) {
        cout << "nom : " << nom << endl;
        cout << "liste joueurs est " << endl;
        for(Joueur j : joueurs){
            j.afficherDetails();
        }
        cout << "score : " << score << endl;
    }

    double calculerMoyenneAge( ) {
        int sommeAges = 0;
        for(Joueur j : joueurs){
            sommeAges += ( 2024 -  j.getAnneeNaissence());
        }
        return (double)sommeAges/joueurs.size();
    }

    string getNom(){
        return nom;
    }
};

class Match{
private:
    Equipe equipeDomicile;
    Equipe equipeExtecreir;
    int scoreEquipeDomicile;
    int scoreEquipeExterieur;

public :

    Match ( Equipe equipeDomicile, Equipe equipeExtecreir):
    equipeDomicile(equipeDomicile) , equipeExtecreir(equipeExtecreir), scoreEquipeDomicile(0), scoreEquipeExterieur(0){}

    void saveGoal(string nomEquipe) {
        if (nomEquipe == equipeDomicile.getNom()) {
            scoreEquipeDomicile++; // equipeDemocile.setScore(equipeDemocile.getScore() + 1);
        } else if (nomEquipe == equipeExtecreir.getNom()) {
            scoreEquipeExterieur++;
        }
    }

    void afficherScore(){
        cout << "Score finale is " << equipeDomicile.getNom()
        << " " << scoreEquipeDomicile << " VS "
        << equipeExtecreir.getNom() << " " << scoreEquipeExterieur << endl;
    }

    void afficherVainqueur() {
        if (scoreEquipeDomicile > scoreEquipeExterieur) {
            cout << "l'equipe vainqueur est  " << equipeDomicile.getNom() << endl;
        } else if (scoreEquipeExterieur > scoreEquipeDomicile) {
            cout << "l'equipe vainqueur est  " << equipeExtecreir.getNom() << endl;
        } else {
            cout << " Match null "<< endl ;
        }
    }

};

int main(){

    Joueur j1("Joueur1", 1, 1990, "gardien");
    Joueur j2("Joueur2", 2, 1995, "gardien");
    vector<Joueur> joueurs;
    for(int i=3; i<=10;++i){
        joueurs.push_back(Joueur("Joueur" + to_string(i), 2, 1998, "joueur"));
    }

    if(joueurs[1] == joueurs[2]){
        cout << " les deux joueurs sont egaux" << endl;
    }else{
        cout << " les deux joueurs ne sont pas egaux" << endl;
    }

    Equipe equie1("Equipe1");
    Equipe equie2("Equipe2");
    equie1.ajouterJoueur(j1);
    equie2.ajouterJoueur(j2);

    equie1.ajouterJoueur(joueurs[0]);
    equie1.ajouterJoueur(joueurs[1]);
    equie1.ajouterJoueur(joueurs[2]);
    equie1.ajouterJoueur(joueurs[3]);

    equie2.ajouterJoueur(joueurs[4]);
    equie2.ajouterJoueur(joueurs[5]);
    equie2.ajouterJoueur(joueurs[6]);
    equie2.ajouterJoueur(joueurs[7]);

    cout << "moyenne age equipe 1 " << equie1.calculerMoyenneAge() << endl;
    cout << "moyenne age equipe 2 " << equie2.calculerMoyenneAge() << endl;

Match match(equie1, equie2);

match.saveGoal(equie1.getNom());
    match.saveGoal(equie1.getNom());

    match.afficherScore();
    match.afficherVainqueur();

    return 0;
}
