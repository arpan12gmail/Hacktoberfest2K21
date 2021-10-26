#include<iostream>
using namespace std;

void subsets(int arr[], int size)
{
    for(int i =0; i<(1<<size);i++)
    {
        for(int j =0; j<size; j++)
        {
            if(i & (1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<"\n";
    }
}
int main()
{ 
    int n ; cin>>n;
    int arr[n];
    for(int i =0; i<n;i++)
    {
        cin>>arr[i];
    }
    subsets(arr,n);
    
    return 0;
}