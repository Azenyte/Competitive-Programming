#include<bits/stdc++.h>
#include<string>
#define ll long long
using namespace std; 


int main(){
	string s; cin >> s;
	bool ds = true;
	// Find if there are lowercase values except the first one 
	for(int i=1; i < s.size(); i++){
		// If islower function(?)
		// Lowercase value
		if(islower(s[i])){
				ds = false;
		}
	}
	if(ds){
		// If ds is true
		for(int i = 0;i < s.size(); i++){
				char sc; 
				// change lower case to upper case
				if(islower(s[i])){
					sc = toupper(s[i]);
				}else{
				// Vice versa
					sc = tolower(s[i]);
				}
				cout << sc;
		}
	}else{
			cout << s;
	}
}
