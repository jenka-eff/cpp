#include<iostream>
using namespace std;

int main() {
	long long x,y;
	cin >> x;
	cin >> y;
	bool a = 0;
	if ((x==0 && y==1) ||(x>0 && y>1)){
		if  ((x>y) ||  (y==x+1) ){
			if ((x-y-1) % 2 == 0){
				a=true;
			}
		}
	}
	if (a){
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}