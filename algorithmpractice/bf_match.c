#include<stdio.h>

int bf_match(const char txt[],const char pat[]){
    int pt,pp;
    pt=0;
    pp=0;
    while(txt[pt] != '\0' &&pat[pp] != '\0'){
        if(txt[pt]==pat[pp]){
            pt++;
            pp++;
        }else{
            pt=pt-pp+1;
            pp=0;
        }
    }
    if(pat[pp]=='\0'){
        return pt-pp;/*先頭の位置を返す*/
    }
    return -1;
}
int main(){
    int idx;
    char s1[256];
    char s2[256];
    scanf("%s",s1);
    scanf("%s",s2);
    idx=bf_match(s1,s2);
    printf("%d",idx);
    return 0;
}