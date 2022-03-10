#include "Demone.hpp"
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
