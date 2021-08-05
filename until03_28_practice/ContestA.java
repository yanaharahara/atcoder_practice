import java.util.*;
public class ContestA {
    public static void main(String[] args){
        Scanner scanner= new Scanner(System.in);
        int a=scanner.nextInt();
        int b=scanner.nextInt();
        int i=a+b;
        if(i>=15 && b>=8){
            System.out.println(1);
        }
        else if(i>=10 && b>=3){
            System.out.println(2);
        }
        else if(i>=3){
            System.out.println(3);
        }
        else{
            System.out.println(4);
        }
        scanner.close();
    }
    
}
