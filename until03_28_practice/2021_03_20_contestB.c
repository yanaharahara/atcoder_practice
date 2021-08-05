#include <stdio.h>

int main(){
    int a[1000];
    int b[1000];
    int N;
    int result=10000;
    scanf("%d",&N);

    for(int i=0;i<N;i++){
        scanf("%d %d",&a[i],&b[i]);
    }

    for(int u=0;u<N;u++){
        for(int j=0;j<N;j++){
            int sum=0;
            if(u==j){
                sum=a[u]+b[j];

            }
            else{
                if(a[u]<b[j])sum=b[j];
                else sum=a[u];

                
            }
            if(sum < result){
                result=sum;
            }

        }
    }
    printf("%d\n",result);
    return 0;
}