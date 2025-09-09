#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    printf("Enter atm pin number: ");
    scanf("%d", &num);
    int sum=0;
    int original = num;
    while(num!=0){
        int rem = num%10;
        sum = sum*10 + rem;
        num=num/10;
    }
    if(original == sum){
        printf("The atm pin %d is palindrome", sum);
    }
    else{
        printf("The atm pin is %d not a palindrome", sum);

    }
    return 0;
    getch();
}