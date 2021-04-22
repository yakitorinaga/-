#include<stdio.h>

int kaijyou(int n){
    if(n>0){
        return n*kaijyou(n-1);
    }else{
        return 1;
    }
}

int main(){
    int x;
    /*標準入力*/
    scanf("%d¥n",&x);
    /*標準出力*/
    printf("%d",kaijyou(x));
    return 0;
}