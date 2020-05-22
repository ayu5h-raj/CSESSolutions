//https://cses.fi/problemset/task/1083

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,temp ;
	scanf("%d",&n);
	int arr[n+2]={0};
	for(int i = 1 ; i < n ; i++){
		scanf("%d",&temp);
		arr[temp]++;
	}
	for(int i = 1 ; i <= n ; i++){
		if(arr[i] == 0){
			cout << i << "\n";
			return 0;
		}
	}
}