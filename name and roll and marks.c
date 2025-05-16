#include<stdio.h>
int main(){
    struct raju{
        char name[43];
        int roll;
        float marks;
    };
    struct raju s1;
    printf("enter the name");
    scanf("%s",&s1.name);
    printf("enter the roll number:");
    scanf("%s",&s1.roll);
    printf("enter the markes");
    scanf("%s",&s1.marks);
    printf("\n sutudent detials:\n");
    printf("name :%s\nroll:%f\nmarks:%2f\n",s1.name,s1.roll,s1.marks);
    return 0;
    }
