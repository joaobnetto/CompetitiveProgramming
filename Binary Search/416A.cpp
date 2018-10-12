#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	vector < string > v[10010];
	for(int i = 0;i < n;++i){
		for(int j = 0;j < 3;++j){
			cin >> s;
			v[i].push_back(s);
		}
	}
	int pt0 = 0, pt1 = 0, menor = INT_MAX, maior = -INT_MAX, number;
	while(pt1 < n){
		number = stoi(v[pt1][1]);
		if(v[pt1][0] == ">="){
			if(v[pt1][2] == 'Y'){
				menor = max(menor, number);
			}
			else{
				menor = min(menor, number);
			}
		}
		else if(v[pt1][0] == "<="){
			if(v[pt1][2] == 'Y'){
				maior = max(maior, number);
			}
			else{
				maior = min(maior, number);
			}
		}
		else if(v[pt1][0] == ">"){

		}
		else if(v[pt1][0] == "<"){

		}
	}
}