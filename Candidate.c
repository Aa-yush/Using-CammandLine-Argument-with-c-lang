/* 
using imbuild function atoi to convert string to integer
*/

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main(int numofargs, char* listofargs[]){
    int age = atoi(listofargs[1]);      // atoi function is used to convert string to int
    printf("\n Your age is : %d",age);
        if(age>= 18){
            printf("You are eligible");
        }else{
            printf("You are not eligible");
        }
    return 0;
}