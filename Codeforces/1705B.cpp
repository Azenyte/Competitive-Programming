#include<bits/stdc++.h>
#define ll long long 
using namespace std;


int t;
int n;
int a[10000]


int main() {
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		ll sum = 0;
		ll res = 0;
		for(int i = 1; i < n; i++){
			if(a[i] == 0){
				if(sum == 0);
				else res++;
			}else{
				sum += a[i];
			}
			res += sum;
		}
		cout << res << "\n";
	}
	return 0;
}



