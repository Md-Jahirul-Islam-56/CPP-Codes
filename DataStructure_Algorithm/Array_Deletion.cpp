#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n)
{
    // Traversal of Array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int InInsertion(int a[], int s, int e, int c, int in)
{
    // Insertion of Array
    if (s >= c)
    {
        return -1;
    }
    for (int i = s - 1; i >= in; i--)
    {
        a[i + 1] = a[i];
    }

    a[in] = e;
    return 1;
}

int indDeletion(int arr[], int size, int index){

    //code for Deletion
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
    return 1;
}

int main()
{
    int capacity = 100;
    int arr[capacity] = {1, 3, 78, 90};
    int size = 4, element = 45, index = 2;

    display(arr, size);

    int test = InInsertion(arr, size, element, capacity, index);

    if (test == -1)
    {
        cout << "Insertion failed!!";
    }
    else if (test == 1)
    {
        size = size + 1;
        display(arr, size);
    }

    indDeletion(arr, size, 2);
    size=size-1;
    display(arr,size);

    return 0;
}