#include<stdio.h>

int main(){
    char str[10];
    printf("Enter a string: ");
    scanf("%s", str);

    int countvowels = 0;

    for(int i=0; i<sizeof(str)/sizeof(char);i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            countvowels++;
        }
    }

    printf("There are %d vowels present in the string: ", countvowels);


    return 0;
}

