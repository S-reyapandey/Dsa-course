#include<iostream>
using namespace std;

bool isPossible(int n, int m, int *time, int mid)
{
      int dayCount = 1;
      int totalTime = 0;
      for(int i = 0; i<m; i++)
      {
           if(totalTime + time[i] <= mid)
           {
            totalTime += time[i];
           }
           else{
            dayCount++;
            if(dayCount > n || time[i]>mid)
            {
                return false;
            }
            totalTime = time[i];
           }
      }
      return true;
}

int bookAllocation(int n, int m, int *time, int s, int e, int *p)
{
    //int ans = -1;
    
    if(s>e)
    {
        return *p;
    }
    int mid = s + (e-s)/2;
     if(isPossible(n,m, time, mid))
     {
        *p = mid;
         return bookAllocation(n, m, time, s, mid-1, p);
     }
     else{
          return bookAllocation(n, m, time, mid+1, e, p);
     }
}

int main()
{
    int time[1000];
    int n;
    int m;
    cin>>n>>m;
    for(int i = 0; i<m;i++)
    {
        cin>>time[i];
    }
    int s = 0;
    int max = 0;
    for(int i = 0; i<m; i++)
    {
        max += time[i];
    }
    int e = max;
    int ans = -1;
    int maxTime = bookAllocation(n, m, time, s, e, &ans);
    cout<<"Max time he/she in a day "<<maxTime<<endl;

    return 0;
}