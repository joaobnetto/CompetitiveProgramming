#include <bits/stdc++.h>

using namespace std;

int main(){
	srand(time(NULL));
	int n;
	cin >> n;
	cout << n << endl;
	for(int i = 0;i < n;i++){
		cout << rand()%1010 << " " << rand()%1010 << endl;
	}
}