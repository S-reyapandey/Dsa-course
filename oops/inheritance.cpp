#include<iostream>
using namespace std;

class Human{
    public:
      int height;
      int weight;
      int age;
    public:
       int getAge(){
        return this->age;
       }

       int setWeight(int w){
        this->weight = w;
       }
};

class Male: public Human{
    public:
       string color;

    void sleep(){
        cout<<"Male sleeping "<<endl;
    }

    int getHeight(){
        return this->height;
    }
};

int main(){

    Male obj;
    obj.height = 5;
    obj.sleep();
    obj.getHeight();

    return 0;
}