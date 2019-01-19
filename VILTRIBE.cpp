#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int T = 0, a = 0, b = 0, sa = 0, sb = 0, flag = 0;
	char s[20][100001];
			do
			{
				cin>>T;
			}while(!(T >= 1 && T <= 20));
			for(int i = 0; i < T; i++)
			{
				cin>>s[i];
			}
			for(int i = 0; i < T; i++)
			{
				a = 0; b = 0; flag = 0; sa = 0; sb = 0;
				for(int j = 0; j < strlen(s[i]); j++)
				{
					if(s[i][j] == 'A')
					{
						if(flag == 0)
						{
							flag = 1;
							a++;
						}
						else if(flag == 1)
						{
							a++;
							a += sa;
							sa = 0;
						}
						else if(flag == 2)
						{
							sb = 0;
							flag = 1;
							a++;
						}
					}
					else if(s[i][j] == 'B')
					{
						if(flag == 0)
						{
							flag = 2;
							b++;
						}	
						else if(flag == 1)
						{
							sa = 0;
							flag = 2;
							b++;
						}
						else if(flag == 2)
						{
							b++;
							b += sb;
							sb = 0;
						}
					}
					else if(s[i][j] == '.')
					{
						if(flag == 1)
						{
							sa++;
						}
						else if(flag == 2)
						{ 
							sb++;
						}
					}
				}
				cout<<a<<' '<<b<<'\n';
			}
	return 0;
}
