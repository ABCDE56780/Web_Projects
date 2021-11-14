//Maximum and minimum of an array using minimum number of comparisons
//https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/
//Cpp

#include<iostream>
#define n 10
using namespace std;

void Comparison(int arry[],int *maxi,int *mini, int i){
    while(i<n-1)
        {
            if (arry[i]<arry[i+1])
            {
                *maxi=max(*maxi,arry[i+1]);
                *mini=min(*mini,arry[i]);
                i+=2;
            }
            else
            {
                *maxi=max(*maxi,arry[i]);
                *mini=min(*mini,arry[i+1]);
                i+=2;

            }
        }
    
}

int main()
{
    int maxi,mini;
    
    int arry[]={12,35,64,78,57,45,23,98,12,45};
  
    if (n%2==0)
    {
        int i=2;
        maxi=max(arry[0],arry[1]);
        mini=min(arry[0],arry[1]);
        Comparison(arry,&maxi,&mini,i);
    }
    else
    {
        int i=1;
        maxi,mini=arry[0];
        Comparison(arry,&maxi,&mini,i);
    }

    cout <<"Maximun: "<<maxi <<"\n" <<"Minimum: "<<mini; 
    return 0;
}

