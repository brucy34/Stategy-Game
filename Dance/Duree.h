#ifndef DUREE_H_INCLUDED
#define DUREE_H_INCLUDED

class Duree
{


public:
    Duree(int jours=0,int heures=0,int minutes=0,int secondes=0);
      bool estEgal(Duree const& b) const
{
    return(m_jours==b.m_jours&&m_heures==b.m_heures&&m_minutes==b.m_minutes&&m_secondes==b.m_secondes);
}
bool operator==(Duree const& b)
{
    Duree const& a(0);
    return a.estEgal(b);
}


private:
     int m_jours;
     int m_heures;
    int m_minutes;
    int m_secondes;



};



#endif // DUREE_H_INCLUDED
