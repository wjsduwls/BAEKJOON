#include <stdio.h>

int main(void){
    int n,k;
    scanf("%d %d", &n, &k);
    
    for (int i=1;i<=n;i++){
        if (n%i==0){
            k--;
            if (k==0){
                printf("%d\n",i);
                break;
            }
        }
    }
    if (k>0){
        printf("0\n");
    }
}