#include<stdio.h>
#include<conio.h>
#include<limits.h>

int main(){
    int arr[10];
     printf("Enter 10 number in array: ");
    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);  
    }
    int maxi = INT_MIN;
    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        if(maxi < arr[i]){
            maxi = arr[i];
        }
    }

    printf("There maximum number in an array is  %d", maxi);
    return 0;
    getch();
}