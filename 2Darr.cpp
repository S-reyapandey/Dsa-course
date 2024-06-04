#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

//printing row wise sum
void printSum(int arr[][4], int row, int col)
{ 
    int sum = 0;
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<4; j++)
        {
            sum += arr[i][j];
        }
        cout<<sum<<" ";
        sum = 0;
    }
    cout<<endl;
}

int largestRowSum(int arr[][4], int row, int col)
{
    int maxi = INT16_MIN;
    int sum = 0;
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<4; j++)
        {
            sum += arr[i][j];
        }
        if(sum>maxi)
        {
            maxi = sum;
        }
        sum = 0;
    }
    return maxi;
}


int main()
{
    int arr[3][4];
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222},{3,33,333,3333}};

    cout<<"Enter the elements "<<endl;
    //taking input -> row wise input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout<<"Printing the array "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << " Enter the element to search " << endl;
    int target;
    cin >> target;

    if (isPresent(arr, target, 3, 4))
    {
        cout << "Element found " << endl;
    }
    else
    {
        cout << "Not found " << endl;
    }


    cout<<"Printing row wise sum "<<endl;
    printSum(arr, 3, 4);
    //cout<<printSum(arr, 3, 4)<<endl;
    int ans = largestRowSum(arr, 3, 4);
    cout<<ans;
    return 0;
}