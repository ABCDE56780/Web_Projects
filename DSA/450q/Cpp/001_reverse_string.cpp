// Write a program to reverse an array or string
//https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
// Cpp

#include <iostream>
#define n 5
using namespace std;

void reverseArray(int arry[])
{
    int start=0,end=n-1,temp;
    while(start<end){
        temp = arry[start];
        arry[start] = arry[end];
        arry[end] = temp;

        start++, end--;
    }
}

void printArray(int arry[])
{
    for (int i=0;i<n;i++)
    {
        cout << arry[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int arry[]={12,34,65,78,43};

    cout << "Original Array: ";
    printArray(arry);

    cout << "Reverse Array: ";
    reverseArray(arry);
    printArray(arry);

    return 0;
}



//python

// arry=[12,34,65,78,43]
// arry=arry[::-1]
// print(*arry)