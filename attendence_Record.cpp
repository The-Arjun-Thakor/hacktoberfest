#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int n=s.size();
	string res;
	for(int i=0; i<n; i++){
		if(s[i]=='G'){res.push_back('G');}
		if(s[i]=='(' && s[i+1]==')'){res.push_back('o');}
		if(s[i]=='a' && s[i+1]=='l'){res.push_back('a');res.push_back('l');}

	}
	cout<<res;
}
