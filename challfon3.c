#include <stdio.h>
#include <stdlib.h>
void bool (int n){
    int i , isPremier;
for(i=2;i>n;i++){
    if (n%2==0){
        isPremier = 0;
        break;
    }
}
   if(isPremier==1)
    printf("%d est premier \n",n);
    else
     printf("%d est pas premier \n",n);
}

int main()
{
    int n ;
    printf(" enter le nombre n:\n");
    scanf("%",&n);
    bool(n);
    return 0;
}
