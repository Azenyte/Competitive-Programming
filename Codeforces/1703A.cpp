#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

int main(){
	// insert a number
	int t; cin >> t;
	string s = "yes";
	string d;
	vector<string> b;
	// repeat until t
	while(t--){
		// input a string d 
		cin >> d;
		// what does transform function do again?
		// from beginning to end, do lowercase values.?
		transform(d.begin(), d.end(), d.begin(),::tolower);
		if(d == s){
			b.push_back("YES");
		}else{
			b.push_back("NO");
		}
	}
	// Print the value
	for(auto i: b){
		cout << i << "\n";
	}
}

