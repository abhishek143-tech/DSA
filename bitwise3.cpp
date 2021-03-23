#include <bits/stdc++.h>
using namespace std;
int repeatNum(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[] = {1,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int repeating = repeatNum(arr, n);
    cout << repeating << endl;
    return 0;
}