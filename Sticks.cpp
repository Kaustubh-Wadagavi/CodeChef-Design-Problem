#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n)
{
    int start=0,end=n-1;
    int temp;
    while(start<=end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
            
        sort(arr,arr+n);
        reverse(arr,n);
        int temp=0;
        int maxarea=1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==arr[i+1]&&temp!=2)
            {
                temp++;
                i++;
                maxarea=maxarea*arr[i];
            }
            if(temp==2)
            break;
        }
        if(temp==2)
        cout<<maxarea<<endl;
        else
        cout<<"-1"<<endl;
        
    }
}