#include <iostream>
using namespace std;

int main() 
{
      int t;
      std::cin >> t;
      while(t--) 
      {
            string s;
            int c=0;
            std::cin >> s;
            int len = s.length();
            for(int i=0;i<len;i=i+2) if(s[i]==s[i+1]) c++;
            if(c==0) std::cout << "yes" << std::endl;
            else std::cout << "no" << std::endl;
      }
	return 0;
}
