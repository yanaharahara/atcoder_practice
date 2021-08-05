import java.util.Scanner;
public class PracticeB {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int i = a * b;
        if(i%2==0){
            System.out.println("Even");
        }
        else{
            System.out.println("Odd");
        }
        scanner.close();
    }
    
}
