// Find the Union and Intersection of the two sorted arrays.
// https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printSet(set<int> arr)
{
    cout << "The union is: ";
    for (auto it : arr) {
        cout << it << " ";
    }
    
    cout << "\n";

}

void printVector(vector <int> arr)
{
    cout << "The intersection is: ";
    for (auto it : arr) {
        cout << it << " ";
    }
    cout << "\n";
}




int main()
{
    //union

    int arr1[]={54,23,87,12,98,34};
    int arr2[]={23,65,24,87,34,12};

    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);

    set<int> union_a;

    for (int i=0;i<n;i++)
        union_a.insert(arr1[i]);
    for (int i=0;i<m;i++)
        union_a.insert(arr2[i]);
    
    printSet(union_a);

    //intersection

    set <int> set1,set2;
    vector <int> intersection_a;

    
    for (int i=0;i<n;i++)
        set1.insert(arr1[i]);
    for (int i=0;i<n;i++)
        set2.insert(arr2[i]);
    

    for (auto i=set1.begin(); i != set1.end(); i++)
    {
        for (auto j=set2.begin(); j != set2.end(); j++)
        {
            if (*i==*j)
                intersection_a.push_back(*i);
        }
    }

    printVector(intersection_a);
}