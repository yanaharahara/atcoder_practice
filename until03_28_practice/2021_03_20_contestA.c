#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int i=a+b;
    int u=1;
    int j=2;
    int k=3;
    int o=4;
    if(i>=15 && b>=8){
        printf("%d\n",u);
    }
    else if(i>=10 && b>=3){
        printf("%d\n",j);
    }
    else if(i>=3){
        printf("%d\n",k);
    }
    else{
        printf("%d\n",o);
    }
    return 0;


}