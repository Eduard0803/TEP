import java.util.Scanner;
// link: https://www.hackerrank.com/challenges/java-loops-i/problem
class Solution{
    public static void main(String[] main){
        Scanner sc = new Scanner(System.in);

        int input = sc.nextInt();

        for(int i=1; i<=10; i++)
            System.out.println(input + " x " + i + " = " + input*i);
    }
}
