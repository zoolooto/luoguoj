#include<bits/stdc++.h>
using namespace std;
int sum[1000];
int main() {
	int n;
	cin>>n;
	sum[0]=sum[1]=1;
	for(int i=2;i<=n;i++){
		sum[i]=sum[i/2]+sum[i-2];
	}
	cout<<sum[n];
}
