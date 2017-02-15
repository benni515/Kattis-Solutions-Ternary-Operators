#include <bits/stdc++.h>
using namespace std;
int e,f,c;
int r(int b) {return b<c?0:r(b/c+b%c)+b/c;}
int main() {
	cin >> e >> f >> c;
	cout << r(e+f);
}
