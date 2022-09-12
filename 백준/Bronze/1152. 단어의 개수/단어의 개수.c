#include <stdio.h>
#include <string.h>

int main(void){
    char arr[1000001];
    int i, cnt =0, len;
    
    scanf("%[^\n]", arr);
    len = strlen(arr);
    
    if (len==1 && arr[0]==' ')
    {
            printf("0");
            return 0;
    }
    
    for (i=1;i<len-1;i++)
    {
        if (arr[i]==' ')
            cnt++;
    }
    printf("%d", cnt+1);
}