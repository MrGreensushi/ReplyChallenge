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

void GameManager::UpdateGuadagnoTurno(vector<int> fragments, int stamina, int turno_stamina)
{
    for (int i = 0; i < fragments.size(); i++)
    {
        int turn = i + turno_attuale + 1;
        if (turn < max_turni)
        {
            guadagno_turno[turn].fragmenti_guadagnati += fragments[i];
        }
    }

    if (turno_stamina + turno_attuale < max_turni)
    {
        guadagno_turno[turno_stamina + turno_attuale].stamina_recupero += stamina;
    }

    return;
}

bool GameManager::NextTurn(Pandora protagonist)
{
    turno_attuale++;
    if (turno_attuale >= max_turni)
        return false;
    protagonist.stamina += guadagno_turno[turno_attuale].stamina_recupero;
    if (protagonist.stamina > protagonist.max_stamina)
        protagonist.stamina = protagonist.max_stamina;
    protagonist.fragmenti += guadagno_turno[turno_attuale].fragmenti_guadagnati;
    return true;
}