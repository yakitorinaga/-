#include<stdio.h>
#include<limits.h>
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            rev = rev * 10 + pop;
        }
        return rev;
    }
int main(){
    int num;
    int ans;
    scanf("%d",&num);
    ans=reverse(num);
    printf("%d\n",ans);
    return 0;
}