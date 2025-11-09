// TASK 3

#include<iostream>
#include<string>
using namespace std;

class Creature{
protected:
    string CreatureName;
public:
    Creature(string name){
        CreatureName = name;
    }
    virtual void DoAction()const=0;
    virtual void DrawOnScreen()const=0;
};

class Player: public Creature{
    public:
    Player(string name):Creature(name){}
    virtual void DoAction()const
    {
      cout <<"Player <"<< CreatureName << "> is attacking!!" << endl;
    }
    
    virtual void DrawOnScreen()const
    {
        DoAction();
    }
};

class Monster: public Creature{
  public:
  Monster(string name): Creature(name){}
  virtual void DoAction()const
    {
      cout <<"Monster <"<< CreatureName << "> is doing monster stuff!!" << endl;
    }
  virtual void DrawOnScreen()const
    {
      DoAction();
    }
};

class WildPig: public Monster{
  public:
  WildPig(string name): Monster(name){}
  virtual void DoAction()const
    {
      cout <<"WildPig <"<< CreatureName << "> is Running!!" << endl;
    }
  virtual void DrawOnScreen()const
    {
      DoAction();
    }
};

class Dragon: public Monster{
  public:
  Dragon(string name): Monster(name){}
  virtual void DoAction()const
    {
      cout <<"Dragon <"<< CreatureName << "> is breathing fire" << endl;
    }
  virtual void DrawOnScreen()const
    {
      DoAction();
    }
};

int main()
{
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