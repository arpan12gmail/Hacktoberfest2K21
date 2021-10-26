// Author : Vanshul 

#include<iostream>
using namespace std;

// int Binary number the power of 2 have one one  "set bit" 
bool powerTwo(int n )
{
    return (n && !(n&n-1));
}

int countSetBits(int n)
{
    int count = 0;
    while(n != 0 )
    {
        n = n &n-1;  
        count ++;  
    }
    return count ;
}

int main()
{
    int n ; 
    cout<< "Enter the number : ";
    cin >> n;
    cout<<"n is the power of 2 or no ? : ";
    cout<<powerTwo(n)<<endl; 
    cout<<"Binary representation of n have how many set bits : ";
    cout<<countSetBits(n); // if power of two then , it will give true value 
    return 0;
}