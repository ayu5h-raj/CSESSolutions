//https://cses.fi/problemset/task/1622

#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<string> s;
	string str ;
	cin >> str;
	sort(str.begin(),str.end());
	s.push_back(str);
	while(next_permutation(str.begin(),str.end()))
		s.push_back(str);
	cout << s.size() << "\n";
	for(string x : s)
		cout << x << "\n";
return 0;
}