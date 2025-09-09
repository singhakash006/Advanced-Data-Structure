#include<stdio.h>
#include<conio.h>
int main(){
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);  
    int count=0;
    
    if(num==0){
        count = 1;
    }
    else{
    while(num>0){
        count++;
        num=num/10;
    }
}
    printf("There are %d digits in a number", count);
    return 0;
    getch();
}