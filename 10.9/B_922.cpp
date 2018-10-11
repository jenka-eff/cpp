#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int c;
	int f=0;
	for(int a = n; a>0; a--){
		for(int b = a; b>0; b--){
			c=a^b;
			if ((c<=n) &&(c<=b) && (a+b>c) && (a+c>b) &&(b+c>a)){
				f++;
			//	cout << a << " " << b << " " << c <<endl;;
			}
		}
	}
	cout << f;
	
	return 0;
}