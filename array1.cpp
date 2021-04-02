#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
//size = size of array
//pos = position to which element is to be inserted
//val = element value to be inserted at that index
//cap = capacity of given array
int insert(int arr[], int size, int pos, int val, int cap)
{
    int index = pos - 1;
    if (cap == size)
    {
        return size;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = val;
    return size + 1;
}

int deleteEle(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            break;
        }
    }
    if (i == n) //element not present
    {
        cout<<"Element not present"<<endl;
        return n;
    }
    for (int j = i; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    return n - 1;
}
int search(int arr[],int n,int ele){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==ele){
            return i;
        }
    }
    return -1; //element not present

}
int main()
{

    int cap = 5;
    int arr[cap];
    arr[0] = 5;
    arr[1] = 60;
    arr[2] = 30;
    arr[3] = 20;
    arr[4] = 10;
    int size = 5;
    printArray(arr, size);
    // int x = 20;
    //insert in an array
    // size = insert(arr, size, 3, 15, cap);

    //delete in an array
    // // size = deleteEle(arr,size,x);
    // // printArray(arr, size);

    // // //search in array
    // int res = search(arr,size,80);
    // if(res==-1){
    //     cout<<"element not present!! \n";
    // }else{
    //     cout<<"element is present at index "<<res<<endl;
    // }
    return 0;
}