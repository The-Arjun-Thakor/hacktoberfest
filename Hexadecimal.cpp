#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e7+9;



signed main(){
	int n,num;
	cin>>n;
	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	for(int i=2;;i++){
		v.push_back(v[i-1]+v[i-2]);
		if(v[i]==n){num=i+1;break;}
	}
	int val=0;

	for(int i=0;i<num;i++){
		for(int j=0;j<num; j++){
			for(int k=0;k<num;k++){
				if(v[i]+v[j]+v[k]==n){cout<<v[i]<<" "<<v[j]<<" "<<v[k];val=1;break;}
			}
			if(val==1){break;}
		}
		if(val==1){break;}
	}




	
}
