#include <bits/stdc++.h>
using namespace std;
int missingNum(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i <= n+1; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}
int main()
{
    int arr[] = {1,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int missing = missingNum(arr, n);
    cout << missing << endl;
    return 0;
}