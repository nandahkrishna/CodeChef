#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
		long long D[1001], X[1001][100001], N[1001], Q[1001], T, d;
		cin>>T;
		for(int l = 0; l < 100001; l++)
		{
		    D[l] = 1;
		}
		for(int t = 0; t < T; t++)
		{
			cin>>N[t]>>Q[t];
			for(int n = 0; n < N[t]; n++)
			{
				cin>>d;
				D[t] *= d;
			}
			for(int q = 0; q < Q[t]; q++)
			{
				cin>>X[t][q];
			}
		}
		for(int t = 0; t < T; t++)
		{
			for(int q = 0; q < Q[t]; q++)
			{
				cout<<X[t][q]/D[t]<<' ';
			}
			cout<<endl;
		}
		return 0;
}
