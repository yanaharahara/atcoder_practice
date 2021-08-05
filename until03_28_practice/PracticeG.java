//import java.util.Scanner;
//import java.util.Arrays;
//import java.util.Comparator;
import java.util.*;
public class PracticeG{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();
        Integer arr[] = new Integer[num];
        //数の決まっていない入力を受け付ける
        for(int i=0;i<num;i++){
            arr[i] = scanner.nextInt();
            
        }
        
        /*
        for(int u=0;u<num;u++){
            for(int j=u+1;u<num;j++){
                if(arr[u]<arr[j]){
                    int tmp=arr[u];
                    arr[u]=arr[j];
                    arr[j]=tmp;
                }
            }
        }
        */
        Arrays.sort(arr,Comparator.reverseOrder());
        /*
        for(int i = 0;i < arr.length;i++)
            System.out.println(arr[i]);
        */    
        int a_sum =0;
        int b_sum =0;
        for(int k=0;k<num;k++){
            if(k%2==0){
                a_sum+=arr[k];

            }
            else{
                b_sum+=arr[k];
            }
        }

        int result = a_sum-b_sum;
        System.out.println(result);
        scanner.close();





    }
}