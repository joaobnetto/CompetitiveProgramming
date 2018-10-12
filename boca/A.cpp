#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	string s, s1;
	cin >> s;
	s1 = s;
	s.erase(0,1);
	char f = s1[0];
	cout << s1 << ", " << s1 << ", bo-";
	if(f == 'b' || f == 'B') cout << s << endl;
	else cout << "b" << s << endl;
	cout << "Banana-fana fo-";
	if(f == 'f' || f == 'F') cout << s << endl;
	else cout << "f" << s << endl;
	cout << "Fee-fi-mo-";
	if(f == 'm' || f == 'M') cout << s << endl;
	else cout << "m" << s << endl;
	cout << s1 << "!" << endl;
}