#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    getline(cin,s);
	//cout<< s;
	stack <char> st;
	string result="";
	
	for( int i=0;i<s.size();){
	     
	     while(i<s.size() && s[i]!= ' '){
	         //cout<< s[i] <<" "<<i<< " th character pushed"<< endl;
	         st.push(s[i]);
	         i++;
	     }
	     while(s[i]==' ')
	     i++;
	     while( !st.empty() ){
	         //cout<< st.top()<<" character popped"<<endl;
	         result+= st.top();
	         st.pop();
	     }
	     if(i!=st.size()-1)
	     result+= " ";
	    
	}
	
    cout << result;
	

}
