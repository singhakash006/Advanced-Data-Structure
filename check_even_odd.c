#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a numbers:");
    scanf("%d",&a);
    if(a%2 == 0){
        printf("%d is even", a);
    }
    else{
        printf("%d is odd", a);
    }
    return 0;
    getch();
}