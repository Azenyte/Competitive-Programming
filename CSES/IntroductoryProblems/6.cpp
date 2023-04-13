/*
	ID: azenyte
	LANG: C++                 
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	string s = "";
	if(n <= 3 && n > 1){
		cout << "NO SOLUTION\n";
		return 0;
	}
	for(int i = 1; i <= n; i++){
		if(i % 2 == 0){
			cout << i << " ";
		}else{
			s += to_string(i) + " ";
		}
	}
	cout << s;
	return 0; 


}



