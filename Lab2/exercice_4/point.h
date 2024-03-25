//
// Created by baddi on 18/3/2024.
//
class point {
private:
    float x,y;
public:
    point (float,float);
    void deplace(float, float);
    void affiche();
    float abscisse();
    float ordonnee();
    void homothetie(float rapport);
    void rotation(float angle);
    float rho();
    float theta();
};
