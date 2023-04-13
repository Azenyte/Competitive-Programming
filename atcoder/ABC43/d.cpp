#include<bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	// a[0] -> a[n];
	// a[0] -> a:w
	for(int i = 0; i < (int)s.size()-1; i++){
		if(s[i] == s[i+1]){
			cout << i+1 << " " << i+ 2 << "\n"; 
			return 0; 
		}
	} 
	for(int i = 0; i < (int)s.size()-2; i++) {
		if(s[i] == s[i+2]){
			cout << i+1 << " " << i+3 << "\n"; 
			return 0; 
		}
	}
	cout << "-1 -1" << "\n"; 

}
	

