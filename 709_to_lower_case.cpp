#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        for(char &c : s){
            
            if(c >='A' && c<= 'Z'){
                c += 32;
            }   
        }
        return s;
    }
};

int main(){
    string s = "HELLO";
    Solution so;
    cout << so.toLowerCase(s);
}