//https://cses.fi/problemset/task/1068

#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	scanf("%lld",&n);
	while(n != 1){
		cout << n << " ";
		if(n&1)
			n = n*3 + 1;
		else
			n = n/2;

	}
	cout << n << " ";
}