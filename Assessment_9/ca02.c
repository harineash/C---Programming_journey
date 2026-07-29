// Program to get 5 numbers from user and print the avg of all numbers using array and for loop
#include <stdio.h>
#include <stdio.h>

int main(){
    
    int a[5],i,sum=0,avg;
    for (i=1;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=1;i<=5;i++)
    {
        sum+=a[i];
    }
    avg=sum/5;
    printf("%d",avg);
    return 0;
}
