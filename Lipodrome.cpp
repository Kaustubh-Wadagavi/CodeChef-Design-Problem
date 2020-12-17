#include <bits/stdc++.h> 
using namespace std; 
const int CHAR = 26; 
bool checkLapi(string s) 
{ 
    int count1[CHAR] = {0}; 
    int count2[CHAR] = {0}; 
  
    int n = s.length(); 
    if (n == 1) 
        return true; 
    for (int i=0,j=n-1; i<j; i++,j--) 
    { 
        count1[s[i]-'a']++; 
  
        count2[s[j]-'a']++; 
    } 
   
    for (int i = 0; i<CHAR; i++) 
        if (count1[i] != count2[i]) 
            return false; 
  
    return true; 
} 
int main() 
{ 
   int t;
   cin>>t;
   while(t--)
   {
	 
    string s;
    cin>>s;
    if (checkLapi(s)) 
        cout << "YES"<<endl; 
    else
        cout << "NO"<<endl;
	}
    return 0; 
} 
