#include <stdio.h>

# define N 1000    //適当に大きな値

int dp[N+1];  

int fib(int n,int *dp) {
  if (dp[n] != -1) return dp[n];
  dp[n] = fib(n - 1,dp) + fib(n - 2,dp);
  return dp[n];
}

int hantei(int n,int *dp){
    for(int i=0;i<=N;i++){
        if(dp[i]==n){
            return 1;
        }
    }
    return 0;
}

int main() {

    for(int i=0; i<=N; i++){        //全ての配列を-1で初期化
        dp[i] = -1;
    }
    dp[0] = 0;    //fib(0) = 0なので配列に解を省略しておく
    dp[1] = 1;    //fib(1) = 1なので配列に解を省略しておく
    fib(10,dp);
    printf("%d\n", dp[10]);
    printf("%d\n",hantei(55,dp));

    return 0;
}