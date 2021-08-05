#include <stdio.h>

int main(){
    int n,a[100],a_sum=0,b_sum=0,result=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(int u=0;u<n;u++){
        for(int j=u+1;j<n;j++){
            if(a[u]<a[j]){
                int tmp = a[u];
                a[u] = a[j];
                a[j] = tmp;
            }
        }
    }

    for(int k=0;k<n;k++){
        if(k%2==0){
            a_sum+=a[k];
        }
        else{
            b_sum+=a[k];
        }
    }

    result = a_sum-b_sum;
    printf("%d\n",result);
    return 0;

}



/*
#define UNUSED    (-1)
int cmpnum(const void * n1, const void * n2)
{
	if (*(long *)n1 > *(long *)n2)
	{
		return 1;
	}
	else if (*(long *)n1 < *(long *)n2)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int main(){
    int n,a[100],a_sum=0,b_sum=0,result=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a,sizeof(a)/sizeof(a[0]),sizeof(long),cmpnum);

    while(sizeof(a) / sizeof(a)!=0){
        int max=0;
        for(int u=0;u<n;u++){
            if(max < a[u]){
                max = a[u];
                printf("%d\n",max);
            }
        }
        a_sum+=max;
        //printf("%d\n",a_sum);
        a[n-1] = UNUSED;
        if(sizeof(a) / sizeof(a)==0)break;
        n-=1;
        b_sum+=max;
        //printf("%d\n",b_sum);
        a[n-1] = UNUSED; 
        n-=1;
        


    }
    result = a_sum-b_sum;
    printf("%d\n",result);
    return 0;


}
*/