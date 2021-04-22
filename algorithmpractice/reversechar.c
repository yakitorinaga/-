#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char *a){
    int n=strlen(a);
    char tmp[n];
    int i=0;
    int j=0;
    for(int i=0;i<=n-1;i++){
        tmp[i]=a[n-1-i];
    }
    for(int i=0;i<=n-1;i++){
        a[i]=tmp[i];
    }
}
void reverse2(char *a){
    int n=strlen(a);
    char tmp[n];
    int i=0;
    while(a[i]!='\0'){
        tmp[i]=a[i];
        i++;
    }
    i=0;
    while(tmp[i]!='\0'){
        a[n-i]=tmp[i];
        i++;
    }
}

int main(){
    char a[256];
    scanf("%s",a);
    reverse2(a);
    printf("%s\n",a);
    return 0;
}