#include <bits/stdc++.h> 
using namespace std;
int n;

void solve(){
	int q,x;
	// Number of days 
	cin >> n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		// Get the number of prices 
		cin >> a[i];
	}
	// Sort the prices in ascending order 
	sort(a.begin(),a.end());
	// Get the number of days youll be staying in
	cin >> q;
	while(q--){
		cin >> x;
		// Wtf does this do?
		auto ans = upper_bound(a.begin(),a.end(),x);
		if(x<a[0]){
			cout << 0 << "\n";
			continue;
		}
		// This shit does not make sense 
		else if(x>=a[n-1]){
			cout << n << "\n"; 
			continue; 
		}
		cout << ans-a.begin() << "\n";

	}

}
int main(){
	solve();
	return 0;
}

