#include<stdio.h>
#include<stdlib.h>

int minout(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}
int main(){
    int N=7;
    int h[N];
    int dp[100010];

    h[0]=0;
    h[1]=1;
    h[2]=2;
    h[3]=3;
    h[4]=4;
    h[5]=5;
    h[6]=6;
    for(int i=0;i<=100010;i++){
        dp[i]=-1000000;
    }
    dp[0]=0;
    dp[1]=abs(h[1]-h[0]);
    for(int i=2;i<=N-1;i++){
        dp[i]=minout(dp[i-1]+abs(h[i-1]-h[i]),dp[i-2]+abs(h[i-2]-h[i]));
    }

    printf("%d",dp[N-1]);
    return 0;
}