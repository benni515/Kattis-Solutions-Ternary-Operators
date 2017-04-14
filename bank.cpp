#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = (a); i < (b); i++)
typedef pair<int,int> ii;

vector<ii> k;
int n,m;
int e[10001][48];

int dp(int a, int t) {return e[a][t]=e[a][t]!=-1?e[a][t]:t==m?0:a>=n?0:max(dp(a+1,t),k[a].first>=t?dp(a+1,t+1)+k[a].second:0);}

int main() {
	cin.sync_with_stdio(false);
	memset(e,-1,sizeof(e));
	cin >> n >> m;
	rep(i,0,n) {
		int a,b;
		cin >> a >> b;
		k.push_back(ii(b,a));
	}
	sort(k.begin(), k.end());
	cout << dp(0,0) << endl;
	return 0;
}

