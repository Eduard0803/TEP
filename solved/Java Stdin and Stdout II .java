import java.util.Scanner;
// link: https://www.hackerrank.com/challenges/java-stdin-stdout/problem
class Solution{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int intInput = sc.nextInt();
        double doubleInput = sc.nextDouble();
        sc.nextLine();
        String stringInput = sc.nextLine();

        System.out.println("String: " + stringInput + "\nDouble: " + doubleInput + "\nInt: " + intInput + "\n");
    }
}
