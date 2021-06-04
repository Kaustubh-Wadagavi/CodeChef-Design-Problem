#include <iostream>
using namespace std;

int main() 
{
    int T;cin>>T;
    for(int u=0;u<T;u++)
    {
        int N;cin>>N;int arr1[5]={0,0,0,0,0};
        for(int i=0;i<N;i++)
        {
	        string s;cin>>s;
	        if(s=="cakewalk" &&arr1[0]==0)
	        {
		        arr1[0]=1;
	        }
	        else if(s=="simple" &&arr1[1]==0)
	        {
		        arr1[1]=1;
	        }
	        else if(s=="easy" &&arr1[2]==0)
	        {
		        arr1[2]=1;
	        }
	        else if(s=="easy-medium" &&arr1[3]==0||s=="medium" &&arr1[3]==0)
	        {
		        arr1[3]=1;
	        }
	        else if(s=="medium-hard" &&arr1[4]==0||s=="hard" &&arr1[4]==0)
	        {
		        arr1[4]=1;
	        }
        }
    if(arr1[0]==1&&arr1[1]==1&&arr1[2]==1&&arr1[3]==1&&arr1[4]==1)
    {
	    cout<<"Yes"<<endl;
    }
    else
    {
    	cout<<"No"<<endl;
    }
        
  }
  return 0;
}