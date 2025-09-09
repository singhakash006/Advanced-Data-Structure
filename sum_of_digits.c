#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);  
    int sum=0;
    int n = num;
    while(num!=0){
        int rem = num % 10;
        sum = sum + rem;
        num=num/10;
    }

    printf("The sum of digit %d is %d", n,sum);
    return 0;
    getch();
}