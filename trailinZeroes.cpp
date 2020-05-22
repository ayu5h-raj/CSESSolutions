//https://cses.fi/problemset/task/1618

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n ;
	scanf("%d",&n);
	int ans = 0 ;
	for(int i = 5 ; i <= n ; i*=5){
		ans += (n/i);
	}
	cout << ans << endl;
}