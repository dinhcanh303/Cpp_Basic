#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n; cin>>n;
	if(n==0) cout << 1;
	else {
		int count=0;
		while(n!=0){
			++count;
			n/=10;
		}
		cout<<count;
		}
	
}
