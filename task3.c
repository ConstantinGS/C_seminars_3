#include <stdio.h>
#include <limits.h>

int main(void){
    int num1, num2, num3;
    int res;

    printf("Three numbers :\n");
    scanf("%d%d%d", &num1, &num2, &num3);
    res = (num1 < num2) && (num2 < num3);
    if (res)
        printf("YES\n");
    else 
        printf("NO\n");
         
}

