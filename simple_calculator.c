#include<stdio.h>
#include<conio.h>

int main(){

    int num1, num2;
    char op;

    printf("Enter the number 1 and number 2 :");
    scanf("%d %d", &num1, &num2);
    printf("Select the operator '+', '-', '/', '*' : ");
    scanf(" %c", &op);
    switch(op){
        case '+':
            printf("The sum is : %d", num1 + num2);
            break;
        case '-':
            printf("The difference is : %d", num1 - num2);
            break;
        case '*':
            printf("The product is : %d", num1 * num2);
            break;
        case '/':
            if(num2 != 0){
                printf("The quotient is : %d", num1 / num2);
            } else {
                printf("Error: Division by zero");
            }
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}