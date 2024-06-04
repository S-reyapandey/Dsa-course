#include <iostream>
using namespace std;

int firstOcc(int *arr, int s, int e, int target)
{
    int mid = s + (e - s) / 2;
    if (s > e)
    {
        return -1;
    }
    if (arr[mid] == target)
    {
        int ans = mid;
        e = mid - 1;
        int ans1 = firstOcc(arr, s, e, target);
        if (ans1 > ans && ans != -1)
        {
            return ans1;
        }
        else
        {
            return ans;
        }
    }
    if (arr[mid] < target)
    {
        return firstOcc(arr, mid + 1, e, target);
    }
    else
    {
        return firstOcc(arr, s, mid - 1, target);
    }
}

int lastOcc(int *arr, int s, int e, int target)
{
    int mid = s + (e - s) / 2;
    if (s > e)
    {
        return -1;
    }
    if (arr[mid] == target)
    {
        int ans = mid;
        s = mid + 1;
        int ans1 = lastOcc(arr, s, e, target);
        if (ans1 > ans && ans != -1)
        {
            return ans1;
        }
        else
        {
            return ans;
        }
    }
    if (arr[mid] < target)
    {
        return lastOcc(arr, mid + 1, e, target);
    }
    else
    {
        return lastOcc(arr, s, mid - 1, target);
    }
}

int main()
{
    int arr[100];
    int n;
    cin >> n;
   
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s = 0;
    int e = n - 1;

    int target;
    cin >> target;

    int ans1 = firstOcc(arr, s, e, target);
    int ans2 = lastOcc(arr, s, e, target);

    cout << "First Occurence of element " << target << " is " << ans1 << "." << endl
         << "And last Occurence of the number " << target << " is " << ans2 << endl;

    return 0;
}