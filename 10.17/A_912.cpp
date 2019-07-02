//http://codeforces.com/contest/912/problem/A

#include <iostream>
#include<cmath>
using namespace std;

int main() {
	long long a,b,x,y,z;
	cin >> a;
	cin >> b;
	cin >> x;
	cin >> y;
	cin >> z;
	long long c = 2*x + y - a;
	long long d = 3*z +y - b;
	cout <<(max(c,(long long)0)+ max(d,(long long)0));
	return 0;
}