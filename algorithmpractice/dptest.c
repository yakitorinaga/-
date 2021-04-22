#include<stdio.h>

int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int main(){
    int n,W;
    int weight[110];
    int value[110];
    
    int dp[100][10010];

    for(int w=0;w<=W;++w){
        dp[0][w]=0;
    }
    for(int i=0;i<n;i++){
        for(int w=0;w<W;w++){
            if(w>=weight[i]){
                dp[i+1][w]=max(dp[i][w-weight[i]]+value[i],dp[i][w]);
            }else{
                dp[i+1][w]=dp[i][w];
            }
        }
    }

    return 0;
}