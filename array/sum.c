//Program to Sum in an Array

#include <stdio.h>
int main(){
    int a,c,i,j,sum=0;
    scanf("%d",&a);
    int b[a];
    for (i=0;i<a;i++){
        scanf("%d",&c);
        b[i]=c;
    }
     for (i=0;i<a;(i++)){
        sum+=b[i];
     }
     printf("%d",sum);
     return 0;
}
