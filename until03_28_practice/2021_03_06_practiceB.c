#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int i = a*b;
    if(i%2==0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
    return 0;
}