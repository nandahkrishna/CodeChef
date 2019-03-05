#include <bits/stdc++.h>
using namespace std;
void pairs(long arr[], long n)
{
    unordered_map<long, long> m;
    long val = 0;
    for (long i = 0; i < n; i++) {
        long rem = -arr[i];
        if (m.find(rem) != m.end()) {
            long count = m[rem];
            val += count;
        }
        m[arr[i]]++;
    }
    if(n > 1) cout<<val;
    else cout<<0;
}
int main()
{
    long n;
    cin>>n;
    long arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    pairs(arr, n);
    return 0;
}
