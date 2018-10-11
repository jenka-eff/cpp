//http://codeforces.com/contest/909/problem/B

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	cout << (n*n+(2*n)+(n%2))/4;
	return 0;
}