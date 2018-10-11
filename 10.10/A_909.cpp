//http://codeforces.com/contest/909/problem/A

#include <iostream>
#include <string>
using namespace std;

int main() {
	string n, f;
	cin >> n;
	cin >> f;
	cout << n[0];
	for (int i = 1; i<n.length(); i++){
		if (n[i]<f[0]){
			cout<< n[i];
		} else{
			break;
		}
	}
	cout << f[0];
	return 0;
}