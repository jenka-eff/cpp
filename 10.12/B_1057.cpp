//https://codeforces.com/contest/1057/problem/B

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,k,a=0;
	cin >> n;
	vector<long long> v(n,0);
	for(int i = 0; i< n; i++){
		cin >> k;
		for(int j = 0; j<=i;j++){
			v[j] += k;
			if ((i-j+1>a) && (100*(i-j+1)< v[j])){
				a = i-j+1;
			}
		}
	}
	cout << a;
	
	return 0;
}