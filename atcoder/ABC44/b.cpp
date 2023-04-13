#include<bits/stdc++.h>
using namespace std;
 
#define fi first
#define se second
#define sp setprecision
#define pb push_back
#define is insert
#define int long long

signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s;
	map<char, int> mp;
	cin>>s;
	for (auto it : s) mp[it]++;
	for (auto it : mp) if (it.se%2 == 1) return cout<<"No", 0;
	cout<<"Yes";
	return 0;
}

