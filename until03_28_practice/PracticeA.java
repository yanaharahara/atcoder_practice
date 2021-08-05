import java.util.Scanner;
public class PracticeA{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int num0 = scanner.nextInt();
        int num1 = scanner.nextInt();
        int num2 = scanner.nextInt();
        String s = scanner.next();
        int sum = num0 + num1 + num2;
        System.out.println(sum+ " " + s);
        scanner.close();
    }
}