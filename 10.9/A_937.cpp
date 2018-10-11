#include <iostream>
#include <set>
using namespace std;

int main() {
	set<int> s;
	int n, k;
	cin >> n;
	for(int i = 0; i<n; i++){
		cin >> k;
		if (k!=0){
			s.insert(k);
		}
	}
	cout << s.size();
	
	
	return 0;
}