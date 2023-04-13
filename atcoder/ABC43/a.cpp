#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n; 
	vector<int> A(n);
	for(int i = 0; i < n; i++){
		A[i] = i + 1;
	} 
	cout << accumulate(A.begin(), A.end(), 0) << "\n"; 
	
}



