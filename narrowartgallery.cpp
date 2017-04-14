#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define iter(it,c) for(__typeof((c).begin()) it = (c).begin();  it != (c).end(); ++it)
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
const double pi = acos(-1);
const int INF = 9999999;

int n,k;
int r[300][3];
int m[300][500][3];

int d(int a, int u, int w) {
	return m[a][u][w]=m[a][u][w]!=-1?m[a][u][w]:a>=n?u==k?0:INF:min(d(a+1,u+1,w)+r[a][w],min(d(a+2,u+1,1-w)+r[a][w],min(d(a+1,u,1-w),d(a+1,u,w))));
}

int main() {
	cin.sync_with_stdio(false);
	while(cin >> n >> k) {
		if(n+k == 0) break;
		memset(r,0,sizeof(r));
		memset(m,-1,sizeof(m));
		rep(i,0,n) cin >> r[i][0] >> r[i][1];
		int t = 0;
		rep(i,0,n) t+=r[i][0]+r[i][1];
		int m = min(d(0,0,0), d(0,0,1));
		cout << t-m << endl;
	}
	return 0;
}
