#include "Duree.h"
#include <iostream>

Duree::Duree(int jours,int heures,int minutes,int secondes):m_jours(jours),m_heures(heures),m_minutes(minutes),m_secondes(secondes)
{
    if(secondes>60)
    {
        m_secondes=secondes/60;
        m_minutes=minutes+(secondes%60);
    }
    else if(minutes>60)
    {
        m_minutes=minutes/60;
        m_heures=heures+(minutes%60);
    }
    else if(heures>24)
    {
        m_heures=heures/24;
        m_jours=jours+(heures%24);
    }
    else
    {
        m_jours=jours;
        m_heures=heures;
        m_minutes=minutes;
        m_secondes=secondes;
    }
}

