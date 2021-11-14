// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
//https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1


#include <iostream>
#include <vector>
using namespace std;

void segregate(int arr[],int n)
{
    int zero=0,one=0,two=0;

    for (int i=0;i<n;i++)
    {
        if (arr[i]==0)
            zero+=1;
        else if (arr[i]==1)
            one+=1;
        else
            two+=1;

    }
    int i=0;
    while(zero!=0)
    {
        arr[i]=0;
        i++;
        zero--;
    }

    while(one!=0)
    {
        arr[i]=1;
        i++;
        one--;
    }
    while(two!=0)
    {
        arr[i]=2;
        i++;
        two--;
    }

    for (int i=0;i<n;i++)
        cout << arr[i] <<" ";
}

int main()
{
    int arr[]={0,2,1,2,0,1,1,2,2,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    segregate(arr,n);
    
}

// 2nd Approach

// void segregate(int arr[],int n)
// {
//     vector <int> zero,one,two;

//     for (int i=0;i<n;i++)
//     {
//         if (arr[i]==0)
//             zero.push_back(0);
//         else if (arr[i]==1)
//             one.push_back(1);
//         else
//             two.push_back(2);

//     }
//     move(one.begin(), one.end(), back_inserter(zero));
//     move(two.begin(), two.end(), back_inserter(zero));
       
    // for(int i=0; i < zero.size(); i++)
    //     std::cout << zero.at(i) << ' ';
// }

// int main()
// {
//     int arr[]={0,2,1,2,0,1,1,2,2,0}
//     n=sizeof(arr)/sizeof(arr[0]);

//     segregate(arr,n);
    
// }



