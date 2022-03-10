#include "GameManager.hpp"
GameManager::GameManager(int _max_turni)
{
    turno_attuale = 0;
    max_turni = _max_turni;
    for (int i = 0; i < _max_turni; i++)
    {
        guadagno_turno.insert({i, {0, 0}});
    }

    /*for (int i = 0; i < guadagno_turno.size(); i++)
    {
        cout << i << " Stamina: " << guadagno_turno[i].stamina_recupero << " Fragmenti: " << guadagno_turno[i].fragmenti_guadagnati <<"\n";
    }*/
}

GameManager::~GameManager()
{
}