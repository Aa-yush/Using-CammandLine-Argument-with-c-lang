#include<conio.h>
#include<stdio.h>
int main(int numofargs, char* listofargs[]){
    int i;
    printf("Number of arguments : %d",numofargs);  // These are the Number of args
    for(i = 0 ; i < numofargs; i++){
        printf("\n%s",listofargs[i]);               // Here , list of args will be printed
    }
    return 0;
}