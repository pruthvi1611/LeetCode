#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x){
        if(x == 0){
            return true;
        }else if(x>0){
            int z = x;
            long int sum=0;
            int y;
            while(z>0){
                y = z % 10;
                sum += y;
                z=z/10;
                if(z>0){
                    sum=sum*10;
                }else{
                    break;
                }
            }
            if(sum==x){
                return true;
            }else{
                return false;
            }             
        }else{
            return false;
        }
    }
};

int main(){
    int x;
    cout << "Enter a number : ";
    cin >> x;
    Solution obj;
    cout << obj.isPalindrome(x);

    return 0; 
    
}