#include <iostream>
using namespace std;

int main(){
	int n,m, res = 0;
	cin >> n >> m;
	for(int i = 0; i < n; ++i){
		int tmp;
		cin >> tmp;
		if (tmp > m){
			res = res + 2;
		}else{
			res++;
		}
	}
	cout << res;

}
