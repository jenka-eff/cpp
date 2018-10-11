#include <iostream>
#include <string>
using namespace std;

int main() {
	string k;
	cin >> k;
	cout <<"k=" << k << endl;
	int m=0, min = 0, t=0;
	for(int i = 0; i<k.length(); i++){
		if (k[i]=='('){
			m++;
		}
		if (k[i]==')'){
			m--;
		}
		if (m<min){
			min = m;
			t=0;
		}
		if (m==min){
			t++;
		}
	}
	if (m!=0){
		t=0;
	}
	cout <<"answer = " << t << endl;
	return 0;
}