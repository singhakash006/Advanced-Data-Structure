#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

bool isfind(int arr[], int size, int key){
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return true;   
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1; 
    }
}
    return false; 

}
int main(){
    int arr[10];
    printf("Enter elements of array in non decreasing order: ");
    for(int i=0; i<10; i++){
         scanf("%d", &arr[i]);  
    }
    int key;
    printf("Enter the element which yo want to search: ");
    scanf("%d", &key);

    if(isfind(arr, 10, key)){
        printf("%d is found.", key);
    }
    else{
        printf("%d is not found.", key);
    }
    return 0;
    getch();
}