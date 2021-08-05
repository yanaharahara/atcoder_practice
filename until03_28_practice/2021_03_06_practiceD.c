#include <stdio.h>

int main(){
    int n,i,u,j,k,l,a[200];
    scanf("%d",&n);

    int cnt=0;

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(l=0;;l++){
        j=0;
        for(k=0;k<n;k++){
            if(a[k]%2==0){
                a[k]/=2;
                j++;
            }
        }
        if(j==n) cnt++;
        if(j<n) break;
    }

    printf("%d\n",cnt);
    return 0;
}
/*
int main(void){
  
  int i,j,k,l,m,n,a[200],cnt;
  
  scanf("%d",&n);  
  
  j=0;
  cnt=0;
  
  for(m=0;m<n;m++){
    scanf("%d",&a[m]);
  }
  
  for(l=0;;l++){
    j=0;
    for(k=0;k<n;k++){
      if(a[k]%2==0){
        a[k]=a[k]/2;
        j++;
      }
    }
    if(j==n) cnt++;
    if(j<n) break;
  }
  
  
  printf("%d",cnt);
  return 0;
  
}
*/