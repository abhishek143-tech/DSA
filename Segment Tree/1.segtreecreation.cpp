#include <bits/stdc++.h>
using namespace std;
void buildTree(int *arr, int s, int e, int *tree, int index)
{
    //this is base case when we have only one element left then we add that element into our tree array by the value of that start position in the normal array .here that is arr. Instead of start pos we can use end pos also.
    if (s == e)
    {
        tree[index] = arr[s];
        return;
    }
    //we build tree like postorder manner . firstly compute left side then right one and then we go for the root part.
    int mid = (s + e) / 2;
    buildTree(arr, s, mid, tree, 2 * index);
    buildTree(arr, mid + 1, e, tree, 2 * index + 1);
    tree[index] = min(tree[2 * index], tree[2 * index + 1]);
    return;
}

int main()
{
    int arr[] = {1, 3, 2, -5, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *tree = new int[4 * n + 1];
    buildTree(arr, 0, n - 1, tree, 1);

    for (int i = 1; i <= 13; i++)
    {
        cout<<tree[i]<<" ";
    }
    

    return 0;
}