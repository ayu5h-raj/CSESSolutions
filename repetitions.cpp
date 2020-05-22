//https://cses.fi/problemset/task/1069

#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin >> str;
	int len = str.length();
	int ans = 0 ;
	for(int i = 0 ; i < len ; ){
		char curr = str[i];
		int cc = 1;
		int j = i+1;
		while(j < len && str[i] == str[j]){
			cc++;
			j++;
		}
		i = j;
		ans = max(ans,cc);
	}
	cout << ans << endl;
}