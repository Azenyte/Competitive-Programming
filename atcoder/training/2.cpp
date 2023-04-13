#include<bits/stdc++.h>
using namespace std;


int main(){
	int n; cin >> n;
	int sum = 0; 
	// Fibonacci? 
	vector<int> a(n); 
	vector<int> b(n); 
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = pow(abs((a[i]-2)), 2);
	}
	for(auto &B : b){
		sum += B;
	}
	cout << sum;     

}
	
