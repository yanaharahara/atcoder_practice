#include <stdio.h>

int main(){
    char s[100];
    scanf("%s",&s);
    int result = 0;
    for(int i = 0;s[i]!='\0';i++){
        if(s[i]=='1'){
            result++;
        }

    }
    printf("%d\n",result);
    return 0;

}