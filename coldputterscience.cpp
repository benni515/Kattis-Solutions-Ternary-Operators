#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = (a); i < (b); i++)
#define iter(it,c) for(__typeof((c).begin()) it = (c).begin(); it != (c).end();++it)
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
const int INF = ~(1<<31);
const double pi = acos(-1);

int n;
vi k;

int d(int a) {
	return a==n?0:k[a]<0?d(a+1)+1:d(a+1);
}

int main() {
	cin.sync_with_stdio(false);
	cin >> n;
	k = vi(n);
	rep(i,0,n) cin >> k[i];
	cout << d(0) << endl;
	return 0;
}

