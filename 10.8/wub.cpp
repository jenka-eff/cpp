#include <iostream>
#include <string>
using namespace std;

int main() {
	string ex = "wub";
	int l = 0;
	string k,n;
	cin >> k;
	cout <<"k=" << k << endl;
	bool s = 0, p= 0;
	for(int i = 2; i<k.length(); i++){
		cout <<"i=" << i << endl;
		cout <<"n=" << n << endl;
		cout <<"k.substr(i-2, 3)=" << k.substr(i-2, 3) << endl;
		if (k.substr(i-2, 3) == ex){
			cout <<"substr" << endl;
			i+=2;
			if (s && !p){
				cout <<"substr" << endl;
				p = true;
				n.append(1,' ');
				l++;
			}
		} else{
			cout <<" not substr" << endl;
			if (!s){
				cout <<"start" << endl;
				s = true;
			}	
			if (p){
				cout <<"probel" << endl;
				p = false;
			}
			n.append(1,k[i-2]);
			l++;
		}
	}
	if (!p){
		n.append(k.substr(k.length()-2,2));
	}
	cout << n << endl;
	return 0;
}