/*File: Spell.h*/
#include <string>
using namespace std;

class Spell{
    string Name;
    unsigned int Price;
    unsigned int MinLevel;
    unsigned int MinDamage;
    unsigned int MaxDamage;

    public:
    Spell();
    Spell(string,int,int,int,int);
    ~Spell();
    virtual void printInfo();
    string getName();
    int getPrice();
    int getMinlevel();
    int getMindamage();
    int getMaxdamage();
    int DealDamage();

};

class IceSpell:public Spell{
    unsigned int DamageReduction;
    unsigned int NRounds;
    
    public:
    IceSpell(string,int,int,int,int,int,int);
    ~IceSpell();
    void printInfo();
    int getDamagereduction();
    int getRounds();
};

class FireSpell:public Spell{
    unsigned int ArmorPenetration;
    unsigned int NRounds;
    
    public:
    FireSpell(string,int,int,int,int,int,int);
    ~FireSpell();
    int getArmorpenetration();
    int getRounds();
    void printInfo();
};

class LightningSpell:public Spell{
    unsigned int AgilityReduction;
    unsigned int NRounds;

    public:
    LightningSpell(string,int,int,int,int,int,int);
    ~LightningSpell();
    void printInfo ();
    int getAgilityreduction();
    int getRounds();

};
