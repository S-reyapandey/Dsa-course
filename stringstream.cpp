#include<iostream>
#include<sstream>
#include<string>

using namespace std;
//program to count number of words in a string and store them in a vector

int countWords(string str)
{
    //Breaking input into word;
    //using string stream

    //Used for breaking the words
    stringstream s(str);

    //to store individual words
    string word;

    int count = 0;
    while(s >> word)
    {
        count ++;
      
    }
      return count;
}




int main()
{
    string s = "Greeks for Greek is a good platform. contribution placements";
    cout<<"Numbers of words are: "<<countWords(s);
    return 0;
    
}