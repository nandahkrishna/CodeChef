#include <bits/stdc++.h>
using namespace std;
long long l[100001];
long long m[100001];
int main()
{
    long long n, q, x, y;
    cin>>n;
    for(long long i = 0; i < n; i++) {
        cin>>x>>y;
        x = (x < 0) ? -x : x;
        y = (y < 0) ? -y : y;
        l[i] = max(x,y);
    }
    sort(l, l+n);
    cin>>q;
    for(long long i = 0; i < q; i++) {
        cin>>x;
        if(x == 0) cout<<0<<'\n';
        else cout<<l[x-1]<<'\n';
    }
    return 0;
}
