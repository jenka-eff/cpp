//https://codeforces.com/contest/1057/problem/A

#include <iostream>
#include <vector>
using namespace std;

int main() {
	long long n;
	cin >> n;
	vector<long long> v(n-1);
	for(long long i = 0; i< n-1; i++){
		cin >> v[i];
	}
	vector<long long> a;
	a.push_back(n);
	while(a[a.size()-1] != 1){
		a.push_back(v[a[a.size()-1]-2]);
	}
	for(long long j = a.size()-1; j>= 0; j--){
		cout << a[j] << " ";
	}
	// your code goes here
	return 0;
}