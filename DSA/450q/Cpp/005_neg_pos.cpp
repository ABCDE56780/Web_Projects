//Move all negative numbers to beginning and positive to end with constant extra space
//https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

#include <iostream>
using namespace std;

void shifting(int arr[], int n)
{
    int left=0,right=n-1;
    while(left<=right)
    {
        if (arr[left]<0 && arr[right]<0)
            left+=1;
        else if (arr[left]>0 && arr[right]>0)
            right-=1;  
        else if (arr[left]>0 && arr[right]<0)
        {
            swap(arr[left],arr[right]);
            left+=1;
            right-=1;
        }
        else
            left += 1,right -= 1;
        
    }
}

void printArray(int arry[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout << arry[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int arry[]={-1,65,34,-23,76,-43,67,-65,23};
    int n=sizeof(arry)/sizeof(arry[0]);
    shifting(arry,n);
    printArray(arry,n);

    return 0;
}

