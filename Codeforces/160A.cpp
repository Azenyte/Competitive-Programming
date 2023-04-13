#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define sync ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main(){
	sync;
	vector<int> n;
	int d; cin >> d;
	ll s = 0; ll ts = 0;ll c = 0;
	for(int i=0; i<d; i++){
			int tmp; cin>>tmp;
			n.push_back(tmp);
			ts += tmp;
	}
	sort(n.begin(), n.end(), greater<int>());
	for(auto i: n){
			s+=i;
			c++;
			if(s > ts/2){
					break;
			}
	}
	cout << c << "\n";


}
