#include<stdio.h>
int add_numbers(int a, int b){
return(a+b);
}
int main(){
    int result = add_numbers(3,5);
    printf("sum:%d\n",result);
    return 0;
}
