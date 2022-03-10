#include <vector>
#include <iostream>

using namespace std;
class Demone
{
public:
    Demone(int _stamina_necessaria,
           int _turni_recupero_stamina,
           int _stamina_recuperata,
           int _turni_fragmenti,
           vector<int> _fragmenti_recuperati, int _id);
    double getCost();
    int id;
    int stamina_necessaria;
    int turni_recupero_stamina;
    int stamina_recuperata;
    int turni_fragmenti;
    vector<int> fragmenti_recuperati;
};