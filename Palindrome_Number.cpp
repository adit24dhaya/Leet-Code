#include<bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(int x) {
        if(x>=0)
        {
            long int temp,sum=0,rem;
            temp = x;
            while(x!=0)
            {
                rem = x % 10;
                sum = sum * 10 + rem;
                x=x/10;
            }
            if(sum==temp)
            {
                return true;
            }
            else
            return false;
        }
        else
        return false;
    }
};