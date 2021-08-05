import java.util.Scanner;
public class PracticeC {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int i = scanner.nextInt();
        String u = String.valueOf(i);
        int cnt=0;
        char k;
        for(int j = 0;j<u.length();j++){
            k = u.charAt(j);
            if(k == '1'){
                cnt++;
            }
        }
        System.out.println(cnt);
        scanner.close();



    }
    
}
