#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void common_to(int arr1[],int arr2[],int m,int n)
{
    int i=0,j=0;
    while(i<m&&j<n)
    {
        if(arr1[i]<arr2[j])
            i++;
        else if(arr2[j]<arr1[i])
            j++;
        else
        {
                cout<<arr1[i++]<<" ";
                j++;

        }

    }
}

int main()
{

    int arr1[100];
    int arr2[100];
    int m,n;
    cout<<"enter number of elements in array_1 and array_2"<<endl;
    cin>>m;
    cin>>n;
    cout<<"enter elements in 1st array"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    cout<<"enter elements in second array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    sort(arr1,arr1+m);
    sort(arr2,arr2+n);
    cout<<"elements common to both are:"<<endl;
    common_to(arr1,arr2,m,n);
}
