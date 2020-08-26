#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
		int n;
		cin>>n;
		cout<<"1 1";
		for(int j=0;j<n/2;j++)
			cout<<0;
		cout<<endl;
	}
	return 0;
		
}
