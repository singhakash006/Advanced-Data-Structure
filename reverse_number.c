#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sum=0;
    while(num!=0){
        int rem = num%10;
        sum = sum*10 + rem;
        num=num/10;
    }
    printf("The reverse number is %d", sum);
    return 0;
    getch();
}
