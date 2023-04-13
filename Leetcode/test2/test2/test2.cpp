#include <iostream>
#include <sstream>
using namespace std;
int main() {
	int n; cin >> n;
	string word;
	while (n--) {
		string tmp; cin >> tmp;
		string tmp2;
		if (tmp.size() > 10) {
			tmp2 = tmp[0] + to_string(tmp.size() - 2) + tmp.back();
			cout << tmp2 << "\n";
		}
		else {
			cout << tmp << "\n";
		}
	}

}