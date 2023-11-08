import java.util.Scanner;
// link: https://www.hackerrank.com/challenges/java-end-of-file/problem
class Solution{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int count=1;

        while(sc.hasNext())
        {
            String input = sc.nextLine();
            System.out.println(count++ + " " + input);
        }
    }
}
