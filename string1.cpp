#include<iostream>
using namespace std;

char tolowerCase(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n)
{
    int s = 0;
    int e = n-1;

    while(s<=e)
    {
        if(a[s] != a[e])
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int getlength(char name[])
{
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++)
    {
          count++;
    }
    return count;
}


char getMaxOccCharacter(string s)
{
    //arr created to count each alphabet
    int arr[26] = {0};

    //create an array of count of characters
    for(int i = 0; i<s.length(); i++)
    {
        char ch = s[i];
        //lowercase
        int number = 0;
        if( ch >= 'a' && ch <= 'z')
        {
             number = ch - 'a';
        }
        else{
            //uppercase
            number = ch - 'A';
        }
        arr[number]++;
    }
//find maximum occ character
    int maxi = -1, ans = 0;
    for(int i = 0; i<26; i++)
    {
        if(maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a'+ ans;
    return finalAns;
}



void reverseString(char name[], int n)
{
    int s = 0;
    int e = n-1;
    while( s<e )
    {
        swap(name[s],name[e]);
        s++;
        e--;
    }
}

int main()
{
    /*char name[30];

    cout<<"Enter your name "<<endl;
    cin>>name;
     
    cout<<"Your name is ";
    cout<<name<<endl;

    int len = getlength(name);
    cout<<"Length: "<<getlength(name)<<endl;
    
    reverseString(name, len);
    cout<<"Your name "<<name<<endl;
    cout<<"Palindrome or Not: "<<checkPalindrome(name, len)<<endl;

    cout<<"Character is "<< tolowerCase('b')<<endl;
    cout<<"Character is "<< tolowerCase('C')<<endl;*/

    string s;
    cin>>s;
    cout<< getMaxOccCharacter(s)<<endl;

    return 0;
}