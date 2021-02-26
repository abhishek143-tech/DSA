#include <bits/stdc++.h>
using namespace std;
void printUnion(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if(arr1[i]>arr2[j]){
            cout<<arr2[j]<<" ";
            j++;
        }else if(arr1[i]<arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }else{
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
    while(i<m){
        cout<<arr1[i++]<<" ";
    }
    while(j<n){
        cout<<arr2[j++]<<" ";
    }
}  
    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int arr1[] = {1, 2, 4, 5, 6};
        int arr2[] = {2, 3, 5, 7};

        int m = sizeof(arr1) / sizeof(arr1[0]);
        int n = sizeof(arr2) / sizeof(arr2[0]);

        // Function calling
        printUnion(arr1, arr2, m, n);
        return 0;
    }