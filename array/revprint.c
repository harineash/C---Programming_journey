//Program to Store and Reverse Print in an Array

#include <stdio.h>
int main(){
    int a,c,i,j;
    scanf("%d",&a);
    int b[a];
    for (i=0;i<a;i++){
        scanf("%d",&c);
        b[i]=c;
    }
     for (i=(a-1);i>=0;(i--)){
         printf("%d",b[i]);
     }
     return 0;
}
