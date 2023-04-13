#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    long long t;
    cin >> t;
	cout << t;
	while(t > 1){
		if(t % 2 == 0){
			t /= 2;
		}else{
			t = 3*t + 1;
		}
		cout << " " << t;
	}
}

