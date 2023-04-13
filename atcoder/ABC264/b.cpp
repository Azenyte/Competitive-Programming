#include<bits/stdc++.h>
using namespace std;
// If row = 1 or 15 then black
// If col = 1 or 15 then black
// If row && col % 2 == 0 then white
// If row && col % 2 == 1 then black 
// If col % 2 == 1 || col % 2 == 0 && row % 2 == 0 then white
// If row % 2 == 1 || row % 2 == 0 && col % 2 == 0 then white

int main(){
	int r, c;
	cin >> r >> c;
	if(r == 1 || r == 15){
		cout << "Black";
	}else if(c == 1 || c == 15){
		cout << "Black";
	}else if(r && c % 2 == 0){
		cout << "White";
	}else if(r && c % 2 == 1){
		cout << "Black";
	}else if(r % 2 == 0 && c % 2 == 1){
		cout << "White"; 
	}else if(c % 2 == 0 && r % 2 == 1){
		cout << "White";
	}
}

