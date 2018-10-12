#include <bits/stdc++.h>

using namespace std;

int main(){
	int original = 6790, tmp = original, x = 10e4, digit = 0;
	int i = 0;
	// cout << x << endl;
	do{
		tmp = original + digit;
		// cout << tmp << endl;
		while(tmp < x){
			i++;
			// cout << tmp << endl;	
			if(tmp % 72 == 0){
				cout << tmp/72 << endl;
			}
			tmp += 10e3;
		}
		cout << digit << endl;
		digit += 2;
		digit %= 10;
	}while(digit != 0);
	cout << i << endl;
}