#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int d = 97;
	if(s.length()<26){
		d = 123;
	//	cout << "q";
	}
	for(int i = 0; i<s.length(); i++){
		if ((int)s[i] < d){
			s[i] = (char)d;
			//cout << d << " " << s[i]<<endl;
			d++;
		} else	if ((int)s[i] == d){
		//	cout << d << " " << (int)s[i]<<endl;
			d++;
			
		} 
		if (d >= 123){
			break;
		}
	}
	
//char t = "a";
	if (d == 123) {
		cout <<  s;
	}
	else{
		cout << "-1";
	}
	
//	s[2] = (char)98;
//	cout <<  s;
	return 0;
}