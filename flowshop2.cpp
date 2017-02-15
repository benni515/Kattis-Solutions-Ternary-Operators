#include <bits/stdc++.h>
using namespace std;
#define r(i,a,b) for(int i = (a); i < (b); i++)

int main() {
	cin.sync_with_stdio(false);
	int n,m;
	cin >> n >> m;n++;
	int e[1001][1001];
	int v[1001][1001];
	memset(v,0,sizeof(v));
	memset(e,0,sizeof(e));
	r(i,1,n)r(a,0,m) cin >> v[i][a];
	r(i,0,m)r(a,1,n) e[a][i]=(i==0?e[a-1][i]:(e[a][i]+e[a][i-1]>e[a-1][i]?e[a][i-1]:abs(e[a-1][i]-e[a][i])))+v[a][i]; 
	r(i,1,n) cout << e[i][m-1] << " ";
	cout << endl;
	return 0;
}

