#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long T, N, n, j = 0;
	char al[26], S[105];
	for(int i = 0; i < 26; i++) al[i] = char('a'+i);
	cin>>T;
    for(int i = 0; i < T; i++)
    {
        cin>>N;
        for(int l = 0; l < N; l++) cin>>S[l];
        n = N;
        if(N%2!=0) n--;
        for(j = 0; j < n; j+=2)
        {
            char t = S[j];
            S[j] = S[j+1];
            S[j+1] = t;
            S[j] = al[25-(int(S[j])-97)];
            S[j+1] = al[25-(int(S[j+1])-97)];
        }
        if(n!=N) S[j] = al[25-(int(S[j])-97)];
        for(int j = 0; j < N; j++) cout<<S[j];
        cout<<endl;
    }
	return 0;
}
