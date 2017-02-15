#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = (a); i < (b); i++)
const int m = 1000;
vector<int> k;
int n;
int e[2001][1002];
int bs(int a, int b) {return abs(a-m)<abs(b-m)?a:(abs(a-m)>abs(b-m)?b:max(a,b));}
int dp(int s, int i) {return e[s][i]=e[s][i]!=-1?e[s][i]:(s>=m||i==n?s:bs(dp(s+k[i],i+1),dp(s,i+1)));}
int main() {
	cin.sync_with_stdio(false);
	memset(e,-1,sizeof(e));
	cin >> n;
	k = vector<int>(n);
	rep(i,0,n) cin >> k[i];
	cout << dp(0,0) << endl;
	return 0;
}

