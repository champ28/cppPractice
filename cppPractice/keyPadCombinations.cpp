#include <bits/stdc++.h>
using namespace std;


string keypad[] = {"","","ABC","DEF","GHI","JKL","MNO","PQR","STUV","WXYZ"};

void generate( string &res, string num, int index  ){
        
        if( index == num.size())
        {
            cout<< res;
        }
        
        int digit= num[index];
        for( int i=0; i< keypad[digit].length(); i++ ){
            
            res.push_back(keypad[digit][i]);
            generate(res,num,i);
            res.pop_back(keypad[digit][i]);
            generate(res,num,i);
        }
                
    
}


int main() {
	// your code goes here
	string res;
	string num="23";
    generate(res,num,0)
}
