#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = (a); i < (b); i++)

bool p(int n, int d) {return n==1?false:n==2?true:d*d>n?true:n%d==0?false:p(n,d+1);}
int f(int n,int i) {return i==2&&n%2==0?f(n/2,i)+2:i==2?f(n,i+1):i*i>n?n>2?n:0:n%i==0?f(n/i,i)+i:f(n,i+2);}

int main() {
	int n;
	while(cin >> n) {
		if(n == 4) break;
		int changes = 1;
		while(!p(n,2)) changes++,n = f(n,2);
		cout << n << " " << changes << endl;
	}
	return 0;
}

