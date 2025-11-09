#include<iostream>
#include<string>
using namespace std;

class Creature {
public:
    Creature(string);
    virtual void DoAction()const=0;
    virtual void DrawOnScreen()const=0;
protected:
    string CreatureName;
};

Creature::Creature(string name) {
    CreatureName = name;
}

class Player : public Creature
{
public:
    Player(string);
    virtual void DoAction()const;
    virtual void DrawOnScreen()const;
};

Player::Player(string name):Creature(name){}

void Player::DoAction()const{
    cout <<"Player <"<< CreatureName << "> is attacking!!!" << endl;
}

void Player::DrawOnScreen()const{
    DoAction();
}

class Monster : public Creature
{
public:
    Monster(string);
    virtual void DoAction()const;
    virtual void DrawOnScreen()const;
};

Monster::Monster(string name):Creature(name){}

void Monster::DoAction()const{
    cout <<"Monster <"<<CreatureName << "> is doing monster stuff" << endl;
}

void Monster::DrawOnScreen()const{
    DoAction();
}

class WildPig : public Monster
{
public:
    WildPig(string);
    virtual void DoAction()const;
    virtual void DrawOnScreen()const;
};

WildPig::WildPig(string name):Monster(name){}

void WildPig::DoAction()const{
    cout <<"Monster <"<< CreatureName << "> is running" << endl;
}

void WildPig::DrawOnScreen()const{
    DoAction();
}

class Dragon : public Monster
{
public:
    Dragon(string);
    virtual void DoAction()const;
    virtual void DrawOnScreen()const;
};

Dragon::Dragon(string name):Monster(name){}

void Dragon::DoAction()const{
    cout <<"Dragon <"<< CreatureName << "> is breathing fire" << endl;
}

void Dragon::DrawOnScreen()const{
    DoAction();
}

int main(){
    Player hero("Kick_Ass");
    Monster mon("UFO");
    WildPig pig("I'm_Hungry");
    Dragon drag("I'm_the_Boss");
    
    Creature* object[4];
    object[0]=&hero;
    object[1]=&mon;
    object[2]=&pig;
    object[3]=&drag;
    
    object[0]->DrawOnScreen();
    object[1]->DrawOnScreen();
    object[2]->DrawOnScreen();
    object[3]->DrawOnScreen();
    
    return 0;
}