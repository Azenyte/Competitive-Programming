#include<bits/stdc++.h>
using namespace std;
// How do I get y though? 
// Is there some kind of formula? 
int main() {
	int n; cin >> n;
	int a[n]; 
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int maxnum = 1000000000; 
	for(int i = -100; i <= 100; i++){
		int res = 0;
		for(int j = 0; j < n; j++){
			res += (a[j] - i)*(a[j]-i); 
		}
		maxnum = min(maxnum, res);
	}
	cout << maxnum << "\n";




} 


