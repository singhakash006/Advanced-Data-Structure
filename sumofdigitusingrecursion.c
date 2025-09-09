#include<stdio.h>
#include<conio.h>

int sum(int num){
    if(num == 0){
        return 0;
    }
    else
    return (num%10) + sum(num/10);
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);  

    printf("The sum of digit %d is %d", num,sum(num));
    return 0;
    getch();
}