//https://cses.fi/problemset/task/1621

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n ;
	scanf("%d",&n);
	int arr[n+1];
	int cc = 0 ;
	for(int i = 0 ; i < n ; i++)
		scanf("%d",&arr[i]);
	sort(arr,arr+n);
	for(int i = 0 ; i < n ; ){
		cc++;
		int j = i + 1;
		while(j < n && arr[i] == arr[j]){
			j++;
		}
		i = j ;
	}
	printf("%d\n",cc);
}