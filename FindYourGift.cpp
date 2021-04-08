#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	char ch[100010];
	scanf("%d",&t);
	
	while(t--)
    {
        int x = 0;
        int y = 0;
        scanf("%d %s",&n, ch);
        
        for(int i=0;i<n;i++)
        {
            char w = ch[i];
            for(int j=i+1;j<n;j++)
            {
                if(w=='L' || w=='R')
                {
                    if(ch[j]=='L' || ch[j]=='R')
                        ch[j] = '*';
                    else
                    {
                        i = j-1;
                        break;
                    }

                }
                else if(w=='U' || w =='D')
                {
                    if(ch[j]=='U' || ch[j]=='D')
                        ch[j] = '*';
                    else
                    {
                        i = j-1;
                        break;
                    }
                }
                else
                {
                    i = j-1;
                    break;
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(ch[i]=='L')
            {
                x--;
            }
            if(ch[i]=='R')
            {
                x++;
            }
            if(ch[i]=='U')
            {
                y++;
            }
            if(ch[i]=='D')
            {
                y--;
            }
        }
        printf("%d %d\n", x, y);
    }

	return 0;
}
