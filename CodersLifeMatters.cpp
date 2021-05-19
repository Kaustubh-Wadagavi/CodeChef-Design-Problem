#include <iostream>
using namespace std;

int main() 
{
	int t,a[30],count,count2,res;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    for(int i=0;i<30;i++)
	    {
	        cin>>a[i];
	    }
	    count=0,res=0,count2=0;
	    for(int i=0;i<30;i++)
	    {
	        if(a[i]==1)
	        {
	            count++;
	        }
	        else if(a[i]!=1)
	        {
	            count=0;
	        }
	        else
	        {
	            count2++;
	        }
	        if(count>5)
	        {
	            res++;
	            break;
	        }
	    }
	    if(res>0)
	    {
	        cout<<"#coderlifematters"<<endl;
	    }
	    else if(count2==30)
	    {
	        cout<<"#allcodersarefun"<<endl;
	    }
	    else
	    {
	        cout<<"#allcodersarefun"<<endl;
	    }
	}
	return 0;
}
