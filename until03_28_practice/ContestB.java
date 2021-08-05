import java.util.*;
public class ContestB {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        Integer A[] = new Integer[N];
        Integer B[] = new Integer[N];

        for(int i=0;i<N;i++){
            A[i] = scanner.nextInt();
            B[i] = scanner.nextInt();
        }

        int result=10101;
        for(int u=0;u<N;u++){
            for(int j=0;j<N;j++){
                int num=0;
                if(u==j){
                    num=A[u]+B[j];
                }
                else{
                    num=Math.max(A[u], B[j]);
                }

                if(num<result){
                    result=num;
                }
            }
        }
        System.out.println(result);
        scanner.close();
    }
    
}
