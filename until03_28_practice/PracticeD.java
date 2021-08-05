import java.util.*;
public class PracticeD {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();
        int[] arr;
        arr = new int[200];
        for(int i=0; i<num; i++){
            arr[i] = scanner.nextInt();
            //System.out.println(arr[i]);
        }
        int cnt = 0;
        while(true){
            int k = 0;
            for(int j=0;j<num;j++){
                if(arr[j]%2==0){
                    arr[j]=arr[j]/2;
                    k++;
                    //System.out.println(k);
            

                }
            }
            //System.out.println(k);
            if(k==num){
                cnt++;
            }
            if(k<num){
                break;
            }    
        }
        System.out.println(cnt);
        scanner.close();
    }
    
}
