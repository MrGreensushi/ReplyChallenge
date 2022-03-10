#include "Demone.hpp"
#include <numeric>
Demone::Demone(int _stamina_necessaria,
               int _turni_recupero_stamina,
               int _stamina_recuperata,
               int _turni_fragmenti,
               vector<int> _fragmenti_recuperati, int _id)
{

    stamina_necessaria = _stamina_necessaria;
    turni_recupero_stamina = _turni_recupero_stamina;
    stamina_recuperata = _stamina_recuperata;
    turni_fragmenti = _turni_fragmenti;
    fragmenti_recuperati = _fragmenti_recuperati;
    id = _id;
}
double Demone::getCost()
    {
        double cost = 0;
        cost = (this->stamina_recuperata - this->stamina_necessaria)/this->turni_recupero_stamina;
        double sum = 0;
        for (auto it : this->fragmenti_recuperati)
            sum+=it;
        sum /=this->fragmenti_recuperati.size();
        cost += sum;
        return cost;
    }
