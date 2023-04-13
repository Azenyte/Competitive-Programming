#include <iostream>
using namespace std;

int main(){
	int j = 0;
	string s; cin >> s;
	string d = "hello";
	for(int i=0; i < s.length();i++){
			if(s[i] == d[j]){
					j++;
			}
	}
	if(j == 5){
			cout << "YES";
	}else{
			cout << "NO";
	}
}
