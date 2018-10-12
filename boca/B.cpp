#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int m;
	cin >> m;
	int misses[20], hmisses[20];
	double h, height[20];
	memset(height, 0, sizeof(height));
	memset(misses, 0, sizeof(misses));
	memset(hmisses, 0, sizeof(hmisses));

	while(cin >> h && h != 0){
		int k, p;
		char c;
		cin >> k;
		for(int i = 0;i < k;i++){
			cin >> p;
			int x = 0;
			for(int j = 0;j < 3;j++){
				cin >> c;
				if(c == 'Y'){
					height[p] = h;
					hmisses[p] = x;
				}
				else if(c == 'N'){
					misses[p]++;
					x++;
				}
			}
		}
	}
	int venc = 0;
	set < int > s;
	height[0] = -10000;
	for(int i = 1;i <= m;i++){
		if(height[i] > height[venc]){
			venc = i;
			s.clear();
		}
		else if(height[i] == height[venc]){
			if(hmisses[i] < hmisses[venc]){
				venc = i;
				s.clear();
			}
			else if(hmisses[i] == hmisses[venc]){
				if(misses[i] < misses[venc]){
					venc = i;
					s.clear();
				}
				else if(misses[i] == misses[venc]){
					s.insert(i);
					s.insert(venc);
				}
			}
		}
	}
	cout << fixed;
	if(s.empty()){
		cout << "The winner is contestant " << venc << ", with a height of " << setprecision(2) << height[venc] << endl;
	}
	else{
		cout << "There is a tie between the following contestants:";
		for(auto i = s.begin();i != s.end();++i){
			cout << " " << *i;
		}
		cout << endl;
	}
}