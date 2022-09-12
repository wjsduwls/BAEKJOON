#include <stdio.h>

int main(void){
    int arr[3];
    int* p = arr;
    int change = 0;
    for (int i = 0;i < 3; i++){
        scanf("%d", &p[i]);
    }
    for (int i=0;i<3;i++){
        for (int j = i+1; j<3;j++) {
            if (p[i]>p[j]){
                change = p[i];
                p[i] = p[j];
                p[j] = change;
            }
        }
    }
    printf("%d",p[1]);
    return 0;
}