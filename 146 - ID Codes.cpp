#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string a;
	while(getline(cin, a)) {
		if(a[0] == '#') break;
		if(next_permutation(a.begin(), a.end()))
			cout<<a<<endl;
		else
			cout<<"No Successor"<<endl;
	}
}
