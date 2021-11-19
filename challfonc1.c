#include <stdio.h>
#include<stdlib.h>
int Add(int a, int b){
    int s;
    s = a+b;
    return s;
}
int main (){
    int a,b,s;
    printf("enter le nombre a:");
    scanf("%d",&a);
    printf("enter le nombre b:");
    scanf("%d",& b);
    s = Add(a,b);
    printf(" l addition de ces nombres est %d :",s  );
}