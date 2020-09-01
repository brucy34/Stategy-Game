#ifndef ZFRACTION_H_INCLUDED
#define ZFRACTION_H_INCLUDED

class ZFraction
{
public:
    ZFraction(int numerateur=0,int denomminateur=0);
    bool estEgal(ZFraction const& autre) const
    {
        return(m_numerateur==autre.m_numerateur&&m_denominateur==autre.m_denominateur);
    }
    bool operator==(ZFraction const& b)
    {
        ZFraction const& a(0);
        return a.estEgal(b);
    }
    bool operator!=(ZFraction const& b)
    {
        ZFraction const& a(0);
        return !(a.estEgal(b));
    }
    bool estPlusPetitQue(ZFraction const& autre) const
    {
        return(m_numerateur*autre.m_denominateur<m_denominateur*autre.m_numerateur);
    }
    bool operator<(ZFraction const& b)
    {
        ZFraction const& a(0);
        return a.estPlusPetitQue(b);
    }
    bool operator>(ZFraction const& b)
    {
        ZFraction const& a(0);
        return b.estPlusPetitQue(a);
    }
    bool operator<=(ZFraction const& b)
    {
        ZFraction const& a(0);
        return !(b.estPlusPetitQue(a));
    }
    bool operator>=(ZFraction const& b)
    {
        ZFraction const& a(0);
        return !(a.estPlusPetitQue(b));
    }
    ZFraction operator+( ZFraction const& b)
{
    ZFraction const& a(0);
    ZFraction copie(a);
    copie+=b;
    return copie;
}
ZFraction& operator+=(ZFraction const& autre)
{
    m_numerateur=autre.m_denominateur*m_numerateur+m_denominateur;
    m_denominateur=m_denominateur*autre.m_denominateur;
    simplifie();
    return *this;
}
ZFraction operator*(ZFraction const& b)
{
    ZFraction const& a(0);
    ZFraction copie(a);
    copie*=b;
    return copie;
}
ZFraction& operator*=(ZFraction const& autre)
{
    m_numerateur*=autre.m_numerateur;
    m_denominateur*=autre.m_numerateur;
    simplifie();
    return *this;
}
private:
    int m_numerateur;
    int m_denominateur;
    void simplifie();
    int pgcd(int a,int b)
    {
        int nombre=pgcd(m_numerateur,m_denominateur);
        m_numerateur /=nombre;
        m_denominateur/=nombre;
    }
};




#endif // ZFRACTION_H_INCLUDED
