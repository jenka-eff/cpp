#include <iostream>
#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main() {
	long long a, b, n, k1,k2;
	cin >> a;
	cin >> b;
	while ((a!=0) &&(b!=0)){
		a = a % (2*b);
		if (a==0){break;}
		if (b>=2*a){
			k1 = 2*b-a-1;
			k2 = 4*a;
		//	q = (x % y) ? x / y + 1 : x / y;
			n = (k1 % k2) ? k1 / k2 + 1 : k1 / k2;
			b -=(2*a*n);
		}
		else{
			break;
		}
	//	cout << a << " " <<b << endl;
		if(b<0){
				b+=(2*a);
			}
	}
	
	cout << a << " " <<b;
	
	
	return 0;
}