#include <bits/stdc++.h>

using namespace std;

int main(){
	double v1, v2;
	cin >> v1 >> v2;
	int x = 2, n = 1, count = 0;
	while(v2 >= 0){
		v2 -= (v1*n);
		if(v2 < 0) break;
		count++;
		n += x;
		x++;
	}
	cout << count << endl;
}