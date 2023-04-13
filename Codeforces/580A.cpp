#include <bits/stdc++.h>
#define ll long long
using namespace std; 

int main(){
	// Find the length of the maximum non-decreasing subsegment in sequence.
	// Inaantok ako tho
	int n; cin >> n;
	ll j=1; ll arr[n];
	ll ans = 0;
	for(int i=0; i<n;i++){
		cin >> arr[i];
		if(arr[i] >= arr[i-1]){
			j++;
		}else{
			ans = max(ans,j);
			j = 1;
		}
	}
	cout << max(ans,j) << "\n";
}
