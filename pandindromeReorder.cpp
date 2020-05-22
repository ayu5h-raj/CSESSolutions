//https://cses.fi/problemset/task/1755

#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin >> str;
	int arr[26] = {0};
	int len = str.length();
	for(int i = 0 ; i < len ; i++)
		arr[str[i]-'A']++;
	int odd = 0 ;
	char c ;
	for(int i = 0 ; i < 26 ; i++){
		if(arr[i]&1){
			c = 'A'+i;
			odd++;
			if(odd > 1){
				cout << "NO SOLUTION";
				return 0;
			}
		}
		arr[i] = arr[i]/2;
	}

	string ans = "";
	for(int i = 0 ; i < 26 ; i++){
		for(int j = 1 ; j <= arr[i] ; j++)
			ans += ('A'+i);
	}

	string temp = ans;
	reverse(temp.begin(),temp.end());
	if(odd)
		ans.push_back(c);
	ans += temp;
	cout << ans ;

}