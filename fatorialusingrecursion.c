#include<stdio.h>
#include<conio.h>

long long fact(long long n){
    if(n==0 || n==1)
        return 1;

    else
        return n*fact(n-1);
    
}
int main(){
    long long n;
    printf("Enter a positive integer: ");
    scanf("%lld", &n);
    
    if(n<0){
        printf("Negative number not valid.");

    }
    else{
    printf("Factorial of %lld = %lld", n, fact(n));
    }
    return 0;
    getch();
}
