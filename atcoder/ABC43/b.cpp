#include<bits/stdc++.h>
using namespace std;

// Why can't I compare strings? 
//
int main() {
	string s,t;
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '0') t+='0';
		else if(s[i] == '1') t+= '1';
		else if(s[i] == 'B' && t.size() >= 1) t = t.substr(0, t.size()-1);
	}
	cout << t << "\n"; 
}

