#include<stdio.h>
#include<conio.h>
int main(){
    int n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for(int i =1; i<=n; i++){
        printf("%d ", t1);
        nextTerm = t1+t2;
        t2=t1;
        t1=nextTerm;
    }
    return 0;
    getch();
}
