#include<iostream>
using namespace std;

int main()
{
    int total_Amount ;
    cin>>total_Amount;
    int no_of_note_100, no_of_note_50,no_of_note_20,no_of_note_1;
    int rem = 0;
   // int note_type;
         switch(1)
         {
            case 1: 
                no_of_note_100 = total_Amount/100;
                rem = total_Amount%100;
                cout<<"No of 100's notes are "<<no_of_note_100<<endl;
                break;

            case 2:
                no_of_note_50 = rem/50;
                rem = rem%50;
                cout<<"No of 50's notes are "<<no_of_note_50<<endl;
                break;

            case 3: 
                no_of_note_20 = rem/20;
                rem = rem%20;
                cout<<"No of 20's notes are "<<no_of_note_20<<endl;
                break;

             case 4:
                 no_of_note_1 = rem/1;
                 cout<<"No of 1's notes are "<<no_of_note_1<<endl;
                 break;

         }
    
    return 0;
}
