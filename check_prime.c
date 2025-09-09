#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
int main(){
   int num;
    printf("Enter a number: ");
    scanf("%d", &num);  
    bool isprime = true;
    for(int i=2; i<num; i++){
        if(num % i == 0){
            isprime = false;
        }
    }

    if(isprime)
    printf("The number %d is prime number.", num);
    else{
         printf("The number %d is not a prime number.", num);
    }
    return 0;
    getch();
}