#include <stdio.h>
#include <limits.h>

int main(void){
    int month;

    printf("Month :\n");
    scanf("%d", &month);
    switch (month)
    {
        case 1:
            printf("January\n");
            break;

        case 2:
            printf("February\n");
            break;
         
        case 3:
            printf("Mart\n");
            break;

        case 4:
            printf("April\n");
            break;

        case 5:
            printf("May\n");
            break;

        case 6:
            printf("June\n");
            break;

        case 7:
            printf("Jule\n");
            break;

        case 8:
            printf("August\n");
            break;

        case 9:
            printf("September\n");
            break;

        case 10:
            printf("October\n");
            break;

        case 11:
            printf("November\n");
            break;

        case 12:
            printf("December\n");
            break;
    }
}

