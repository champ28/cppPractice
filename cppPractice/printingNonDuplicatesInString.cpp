#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    getline(cin,s);
	
	set<char> st;
	
	for(int i=0;i< s.size(); i++){
	    
	    if(s[i]!=' ')
	    st.insert(s[i]);
	}
	
	auto iter= st.begin();
	
	while( iter != st.end()){
	cout<< *iter;
	iter++;
	}
}
