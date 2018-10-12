#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	string s;
	vector < string > v1, v2;
	for(int i = 0;i < 3;i++){
		cin >> s;
		v1.push_back(s);
	}	
	for(int i = 0;i < 3;i++){
		cin >> s;
		v2.push_back(s);
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	map < char , int > m1, m2;
	int s1, f1, t1, s2, f2, t2;
	s1 = f1 = t1 = s2 = f2 = t2 = 0;
	for(int i = 0;i < 3;i++){
		m1[v1[i][0]]++;
		m1[v1[i][1]]++;
		m2[v2[i][0]]++;
		m2[v2[i][1]]++;
	}
	if(m1[v1[0][0]] == 3) t1 = 1;
	if(m2[v2[0][0]] == 3) t2 = 1;
	if(m2[v2[0][1]] == 3) f2 = 1;
	if(m1[v1[0][1]] == 3) f1 = 1;
	if(v1[2][0] - 1 == v1[1][0] && v1[2][0] - 2 == v1[0][0]) s1 = 1;
	if(v2[2][0] - 1 == v2[1][0] && v2[2][0] - 2 == v2[0][0]) s2 = 1;
	int hand1 = 0, hand2 = 0;
	if(f1 && s1) hand1 = 4;
	else if(t1) hand1 = 3;
	else if(f1) hand1 = 2;
	else if(s1) hand1 = 1;
	if(f2 && s2) hand2 = 4;
	else if(t2) hand2 = 3;
	else if(f2) hand2 = 2;
	else if(s2) hand2 = 1;
	if(hand1 == hand2 && hand1 == 0){
		cout << "There is a tie.\n";
	}
	else if(hand1 > hand2) cout << "Player 1 wins.\n";
	else if(hand2 > hand1) cout << "Player 2 wins.\n";
	else{
		if(hand1 == 2){
			int t1 = 0, t2 = 0;
			for(int i = 0;i < v1.size();i++){
				t1 += (v1[i][0] - '0');
			}
			for(int i = 0;i < v2.size();i++){
				t2 += (v2[i][0] - '0');
			}
			if(t1 > t2) cout << "Player 1 wins.\n";
			else if(t2 > t1) cout << "Player 2 wins.\n";
			else cout << "There is a tie.\n";
		}
		else{
			if(v1[0][0] > v2[0][0]) cout << "Player 1 wins.\n";
			else if(v2[0][0] > v1[0][0]) cout << "Player 2 wins.\n";
			else cout << "There is a tie.\n";
		}
	}
}