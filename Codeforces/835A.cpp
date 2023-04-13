#include <iostream>
using namespace std;

int main(){
	int s,v1,v2,t1,t2; cin >> s >> v1 >> v2 >> t1 >> t2;
	int one = s*v1 + 2*t1;
	int two = s*v2 + 2*t2;
	if(one < two){
			cout << "First";
	}else if(one > two){
			cout << "Second";
	}else{
			cout << "Friendship";

}
