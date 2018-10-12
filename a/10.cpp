#include <bits/stdc++.h>

using namespace std;

char v1[30] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};

int main(){
	char X;
	cin >> X;
	int mod;
	string s;
	cin >> s;
	if(X == 'R') mod = -1;
	else mod = 1;
	string final = "";
	for(int i = 0;i < s.size();++i){
		for(int j = 0;j < 30;j++){
			if(v1[j] == s[i]){
				final += v1[j+mod];
				break;
			}
		}
	}
	cout << final << endl;
}