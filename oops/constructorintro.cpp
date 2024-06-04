#include <iostream>
#include <cstring>
using namespace std;

class Hero
{

private:
    int health;

public:
    char level;
    char *name;
    static int timetoComplete;

    int gethealth()
    {
        return health;
    }

    char getlevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health = h;
    }
    void setlevel(char ch)
    {
        level = ch;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    static int random()
    {
        // cout << this -> health << endl;
        cout << timetoComplete << endl;
    }

    Hero()
    {
        cout << " Constructor called " << endl;
        name = new char[100];
    }

    void print()
    {
        cout << endl;
        cout << "name " << this->name << endl;
        cout << "level " << this->level << endl;
        cout << "health " << this->health << endl;
        cout << endl;
    }

    // Parametrised Constructor
    Hero(int health)
    {
        cout << "this ->" << this << endl;
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    Hero(Hero &temp)
    {

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void setName()
    {
        strcpy(this->name, name);
    }

    // Destructor
    ~Hero()
    {
        cout << "Destructor called " << endl;
    }
};

int Hero ::timetoComplete = 5;

int main()
{

    cout << Hero::timetoComplete << endl;

    Hero a;

    cout << a.timetoComplete << endl;

    /*//Static
    Hero a;

    //Dynamic
    Hero *b = new Hero();

    Hero hero1;
    hero1.sethealth(34);
    hero1.setlevel('D');
    char name[7] = "Shreya";
    hero1.setName(name);
    hero1.print();

    //use default copy constructor
    Hero hero2(hero1);
    hero2.print();
    //Hero hero2 = hero1;

    hero1.name[0] = 'G';
    hero1.print();

    hero2.print();

    hero1 = hero2;

    Hero S(70, 'C');
    S.print();

    //copy constructor
    Hero R(S);
    R.print();


    // object created statically
   Hero ramesh(10);

    // cout<<"Address of ramesh "<<&ramesh<<endl;
    ramesh.gethealth();
    ramesh.print();

    // dynamically
    Hero *h = new Hero;
    h->print();

    Hero temp(22, 'B');
    temp.print();*/

    return 0;
}