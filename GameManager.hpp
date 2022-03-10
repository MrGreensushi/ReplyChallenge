#include <map>
#include <iostream>
using namespace std;

class GameManager
{
    struct Stamina_Fragments
    {
        int stamina_recupero;
        int fragmenti_guadagnati;
    };

public:
    map<int, Stamina_Fragments> guadagno_turno;
    int turno_attuale;
    int max_turni;
    GameManager(int _max_turni);
    ~GameManager();
};
