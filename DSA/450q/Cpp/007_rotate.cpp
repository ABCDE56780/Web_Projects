// Cyclically rotate an array by one
//https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1

#include <iostream>
using namespace std;

int main()
{
    int arr[]={12, 56 ,34 ,32 ,21};
    int n=sizeof(arr)/sizeof(arr[0]);

    int j=n-1;
    for (int i=0;i<n-1;i++)
    {
        cout << arr[j] << " " << arr[j-1]<<endl;
        swap(arr[j],arr[j-1]);
        j=j-1;
    }

    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    return 0;
}