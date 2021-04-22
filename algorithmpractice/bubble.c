#include<stdio.h>
#include<stdlib.h>

void bubble(int *a,int n){
    double tmp;
    for(int i=0;i<n-1;i++){
        for(int j=0+i;j<n-1;j++){
            if(a[j]>a[j+1]){
                tmp=a[j+1];
                a[j+1]=a[j];
                a[j]=tmp;
            }
        }
    }
}

int main(){
    int *x;
    int n=7;
    x=calloc(n,sizeof(int));
    for(int i=0;i<=n-1;i++){
        scanf("%d",&x[i]);
    }

    bubble(x,n);
    for(int i=0;i<=n-1;i++){
        printf("%d ",x[i]);
    }
    return 0;
}