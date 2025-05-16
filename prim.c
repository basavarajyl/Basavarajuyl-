#include<stdio.h>
int i,num,isprim=1; 
int main(){
    printf("enter the num starting form positive 2");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if(num%2==0){
            printf("its not a ptime\n");
        }
        else{
            printf("its a prime");
        }
        }
}


enter the num starting form positive 25
its a prime

=== Code Execution Successful ===
