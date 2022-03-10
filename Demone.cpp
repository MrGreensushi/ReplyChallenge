class Demone
{
public:
    int stamina_necessaria;
    int turni_recupero_stamina;
    int stamina_recuperata;
    int turni_fragmenti;
    int fragmenti_recuperati;

    Demone(int _stamina_necessaria,
           int _turni_recupero_stamina,
           int _stamina_recuperata,
           int _turni_fragmenti,
           int _fragmenti_recuperati)
    {

        stamina_necessaria = _stamina_necessaria;
        turni_recupero_stamina = _turni_recupero_stamina;
        stamina_recuperata = _stamina_recuperata;
        turni_fragmenti = _turni_fragmenti;
        fragmenti_recuperati = _fragmenti_recuperati;
    }
};