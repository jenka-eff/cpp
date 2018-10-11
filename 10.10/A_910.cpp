//http://codeforces.com/contest/910/problem/A

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n, d;
	string s;
	cin >> n >> d;
	cin  >> s;
	int st = 0, f = 0, t = 0;
	for(int i = 1; i < n-1; i++){
		if (s[i] == '1'){
			t = i;
		}
		if (i-st == d){
			if (t != st){
				st = t;
				f++;
			}
			 else {
				f = -2;
				break;
			}
		}
	}	
	cout << ++f;
	return 0;
}