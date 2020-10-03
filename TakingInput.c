/*
    using userdefined function to convert string to int
*/

#include<stdio.h>
#include<conio.h>
void main(int numofargs,char* listofargs[]){
    int fno,sno,result=0;
    fno = string_to_int(listofargs[1]);     // Example 27
    sno = string_to_int(listofargs[2]);
    result = fno + sno;
    printf("Addition is : %d",result);
}

int string_to_int(char *str){
    int x,i;
    for(x=0,i=0;str[i];i++){
        if(str[i]>='0' && str[i]<='9'){
             x = x * 10 + (str[i] - 48);    // 0 * 10 +( 50 - 48) // Ascii value of 2 is 50
        }else{
            break;
        }
    }
    return x;
}