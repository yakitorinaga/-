#include<stdio.h>

int euclid(int x,int y){
    if(y==0){
        return x;
    }else{
        return euclid(y,x%y);
    }
}
 
 int main(){

     int a,b;

     scanf("%d",&a);
     scanf("%d",&b);
     printf("%d \n",euclid(a,b));
     
     return 0;
 }