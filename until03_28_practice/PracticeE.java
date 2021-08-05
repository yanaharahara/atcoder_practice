import java.util.Scanner;
public class PracticeE {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();
        int x = scanner.nextInt();
        int cnt = 0;
        for(int i=0;i<a+1;i++){
            for(int j=0;j<b+1;j++){
                for(int k=0;k<c+1;k++){
                    if(i*500+j*100+k*50==x){
                        cnt++;
                    }

                }
            }
        }
        System.out.println(cnt);
        scanner.close();
    }
    
}
