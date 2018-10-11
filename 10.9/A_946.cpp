#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int n,k, t=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> k;
		t+=abs(k);
	}
	cout << t;
	
	
	return 0;
}