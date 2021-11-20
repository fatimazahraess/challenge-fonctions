#include <stdio.h>
#include <stdlib.h>
void echange (int a , int b){
    int s ;
    s = a ;
    a = b ;
    b = a ;
    printf("l echange est :a=%d /n b==%d",a,b);

}

int main()
{
    int a ,b ,s;
    printf("enter la valeur a :\n");
    scanf("%d",&a);
    printf("enter la valeur b :\n");
    scanf("%d",&b);
    echange(a,b);
    return 0;
}
