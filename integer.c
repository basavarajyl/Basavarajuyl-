#include<stdio.h>
int square(int num){
return num * num;
}
int main(){
    int number,result; 
    printf("enter an integer:");
    scanf("&d",&number);
    result = square(number);
    printf("square of %d is %d\n",number,result);
    return 0;
}


