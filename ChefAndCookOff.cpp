#include <iostream>
using namespace std;

int main() 
{
	int a,c;
	std::cin >> a;
	int s[5];
	for(int i=0;i<a;i++)
	{
	    c=0;
	    for(int j=0;j<5;j++)
	    {
	        cin >> s[j];
	        if(s[j]==1)
	        {
	            c++;
	        }
	    }
	    switch(c)
	    {
	        case 0:
	        std::cout << "Beginner" << std::endl;
	        break;
	        case 1:
	        std::cout << "Junior Developer" << std::endl;
	        break;
	        case 2:
	        std::cout << "Middle Developer" << std::endl;
	        break;
	        case 3:
	        std::cout << "Senior Developer" << std::endl;
	        break;
	        case 4:
	        std::cout << "Hacker" << std::endl;
	        break;
	        case 5:
	        std::cout << "Jeff Dean" << std::endl;
	        break;
	    }
	}
	return 0;
}
