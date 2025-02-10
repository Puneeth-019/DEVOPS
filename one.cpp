#include<iostream>
#include<cmath>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int n=10,rem;
	vector<int> y;
	while(n>0){
		y.push_back(n%2);
		n/=2;
	}
	int count=0;
	for(int i=0;i<y.size();i++){
		if(y[i]==1){
			count++;
		}
	}
//	vector<int> v;
//	for(int j=0;j<count;j++){
//		v.push_back(0);
//	}
//	for(int k=j;k<y.size();k++){
//		v.push_back(1);
//	}
//	for(int l=v.size()-1;l>=0;l--){
//		if(v[i]==1){
//			dec+=power;
//		}
//		power*=2;
//	}
	int dec=0;
	for(int k=0;k<count;k++){
		dec+=pow(2,k);
	}
	cout<<dec;
	return 0;
	
}
