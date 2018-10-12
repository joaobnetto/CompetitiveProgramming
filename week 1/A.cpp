#include <bits/stdc++.h>

using namespace std;

LCM = fabs(a*b)/__gcd(a,b);
 
int main(){
	string s1, s2;
	cin >> s1 >> s2;
	int j = 0;
	for(int i = 0;i < s1.size(), j < s2.size();i++, j++){
		if(s1[i] == s2[j]) continue;
		else{
			cout << 1 << endl;
			return 0;
		}
	}	
	cout << s1 << endl;
}