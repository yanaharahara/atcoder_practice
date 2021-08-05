
#include <stdio.h>
int main(){
    int n,a,b,r=0,i,j;
    scanf("%d%d%d",&n,&a,&b);
    for(i=1;i<=n;i++){
        int s=0;
        j=i;
        for(;j;j/=10)s+=j%10;
        if(a<=s&&s<=b)r+=i;
    }
    printf("%d\n",r);
    return 0;
}

/*

#include <stdio.h>

int main(){
    int n,a,b,result=0;
    scanf("%d %d %d",&n,&a,&b);
    int sum = 0;
        
    for(int i=1;i<=n;i++){
        int u=i;
        while(u>0){
            sum+=u%10;
            u/=10;
            
        }
        
        
        if(sum>=a  && sum<=b){
            result+=i;
        }    
        
        
        printf("%d\n",i);
        for(;;){
            sum += i % 10;
            i = i / 10;
            if(!i)break;
        

        }
        
            
        
            
            
        
    
    }
    
    printf("%d\n",result);
    


    return 0;
}
*/