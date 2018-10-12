#include <bits/stdc++.h>

using namespace std;

string v[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday",
"Friday", "Saturday"};

int main(){
	int n;
	cin >> n;
	int t = 0, year = 1867;
	for(int i = 0;i < n;i++){
		year++;
		if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) t++;
		t++;
		if(t > 6) t -= 7;
	}
	cout << v[t] << endl;
}