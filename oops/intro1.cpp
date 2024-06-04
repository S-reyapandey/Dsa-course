#include <iostream>
using namespace std;

class Hero
{
    // properties
    int health;
    char level;

    public:

    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    void sethealth(int h, char name){
        if(name = "A"){
            health = h;
        }
    }

    void setlevel(char ch){
        level = ch;
    }

};

int main()
{
    // creation of object
    Hero ramesh;
    cout<<"Ramesh health is "<<ramesh.gethealth()<<endl;
    //use setter
    ramesh.sethealth(70);
    ramesh.level = 'A';

    cout << "Health is: " << ramesh.health << endl;
    cout << "Level is: " << ramesh.level << endl;

    return 0;
}