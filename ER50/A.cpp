#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	unsigned long long int n, k;
	cin >> n >> k;
	unsigned long long int t = k/n;
	if(k%n != 0) t++;
	cout << t << endl;
}