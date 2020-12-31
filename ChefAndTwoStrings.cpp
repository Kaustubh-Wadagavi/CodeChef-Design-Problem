#include <iostream>
using namespace std;

int main() 
{
	int t;
	std::cin >> t;
	while(t--) 
	{
	   int i, minimum=0,maximum=0;
	   string s1,s2;
	   std::cin >> s1 >> s2;
	      
	   for(i=0;i<s1.length();i++) 
	   {
	       if(s1[i]=='?' || s2[i]=='?') maximum++;
	       else if(s1[i] != '?' & s2[i] != '?' && s1[i] != s2[i]) 
	       {
	           minimum++;
	           maximum++;
	       }
	   }
	 std::cout << minimum <<" "<< maximum << std::endl;
	}
	return 0;
}
