#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <functional>
#include <array>
#include <iostream>
#include <string_view>
#include "Demone.hpp"
#include "Pandora.hpp"
#include "GameManager.hpp"
using namespace std;
int read_input(char* input_file, Pandora &p, vector<Demone> &vec) {
    int stamina, max_stamina, Nt,Nd;
   ifstream file(input_file);  
   file >> stamina>> max_stamina>> Nt>> Nd;
    p = Pandora(stamina,max_stamina,0);
   for( int i=0;i<Nd;i++)
   {
       int stamina_to_kill,recovery_turns, stamina_recovered,fragment_turns;
       file >> stamina_to_kill>> recovery_turns>> stamina_recovered>> fragment_turns;
       vector<int> fragments_per_turn;
       for(int j=0;j<fragment_turns;j++)
       {
           int frag;
           file >> frag;
           fragments_per_turn.push_back(frag);
       }
       vec.push_back(Demone(stamina_to_kill,recovery_turns,stamina_recovered,fragment_turns,fragments_per_turn));

   }
   return Nt;
}
void play(GameManager gm, Pandora pandora, vector<Demone> demons)  {
    vector<int> demons_list;
    auto cmp = [](Demone a, Demone b) { return a.getCost() < b.getCost();};
    sort(demons.begin(),demons.end(),cmp);
    int turn=0
    while(gm.turno_attuale<  gm.max_turni)
}
int main(int argc, char** argv)
{
    if(argc !=2)
        return -1;
    char* file = argv[1];
    Pandora pandora(0,0,0);
    vector<Demone> demons;
    int Nt=read_input(file,pandora,demons);
    GameManager gm(Nt);
    play(gm,pandora,demons);
}