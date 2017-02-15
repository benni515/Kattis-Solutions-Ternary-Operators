#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = (a); i < (b); i++)
const int d = 10000;

string w = "welcome to code jam", t;
int s = w.size(), z;
int m[19][500];
int b(int i, int p) {return m[i][p]=i==s?1:(p>=z?0:(t[p]==w[i]?b(i+1,p+1):0)+b(i,p+1)%d);}

int main() {
	cin.sync_with_stdio(false);
	int n;
	cin >> n;
	getline(cin,t);
	rep(i,0,n) {
		getline(cin,t);
		z = t.size();
		memset(m,-1,sizeof(m));
		cout << "Case #" << i+1 << ": "+to_string(b(0,0)+d).substr(1,5) << endl;
	}
	return 0;
}

