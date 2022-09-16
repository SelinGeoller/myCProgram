#include <stdio.h>
int main(){
    int a,b,t;
    scanf("%d%d",&a,&b);
    t = b;
    b = a;
    a = t;
    printf("%d %d\n",a,b);
    return 0;