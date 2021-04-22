#include<iostream>
class Solution {
public:
    bool isPalindrome(int x) {
        int x_tmp=x;
        if(x<0){
            return false;
        }
        long long ret;
        while(x>=10){
            ret=ret*10+x%10;
            x/=10;
        }
        ret =ret*10+x;
        return ret==x_tmp;
    }
};