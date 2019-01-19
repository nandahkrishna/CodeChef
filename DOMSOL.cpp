#include<bits/stdc++.h>
using namespace std;
int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a[100001], b[100001], sum[100002], n;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
	    cin>>a[i];
	}
	for(int i = 0; i < n; i++)
	{
	    cin>>b[i];
	}
	sum[0] = 0; // no tiles
	sum[1] = abs(a[0]-b[0]); // 1 tile placed - only vertical
	for(int i = 2; i <= n; i++) // n tiles are placed
	{
	    sum[i] = max(sum[i-2]+abs(a[i-2]-a[i-1])+abs(b[i-2]-b[i-1]), sum[i-1]+abs(a[i-1]-b[i-1]));
	    // placing the ith vertical if odd, ith horizontal if even
	}
	cout<<sum[n];
	return 0;
}
