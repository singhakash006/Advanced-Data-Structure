#include<stdio.h>
#include<conio.h>

int main(){

    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a, &b, &c);

    if(a>c && a>b ){
        printf("%d is greatest number.", a);
    }
    else if(b>a && b>c){
         printf("%d is greatest number.", b);
    }
    else{
         printf("%d is greatest number.", c);
    }

    return 0;
}