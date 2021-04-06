#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
      int low = 0, high = n - 1;

      while (low < high)
      {
            int temp = arr[low];

            arr[low] = arr[high];

            arr[high] = temp;

            low++;
            high--;
      }
}

int main()
{

      int arr[] = {10,20,30,40,50}, n = 5;

      cout << "Before Reverse" << endl;

      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " ";
      }

      cout << endl;

      reverse(arr, n);

      cout << "After Reverse" << endl;

      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " ";
      }
}