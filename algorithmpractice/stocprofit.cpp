#include<iostream>
#include<vector>
class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int min=1e+5;
        int max=1;
        int maxprofit=0;
        for(int i=0;i<=prices.size()-1;i++){
            if(prices[i]<min){
                min=prices[i];
            }
            if(prices[i]-min>maxprofit){
                maxprofit=prices[i]-min;
            }
        }
        return maxprofit;
    }
};