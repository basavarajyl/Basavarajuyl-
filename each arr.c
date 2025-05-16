#include<stdio.h>
#include<string.h>
int i,n;
int each(char arr[n])
{
    for(i=0;i<n;i++)
    {
        printf("%dc",arr[i]);
}
}
int main()
{
    char arr[]={"manu"};
    n=strlen(arr);
    int res=each(arr);
}
