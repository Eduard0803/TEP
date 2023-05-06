import java.util.Scanner;
// link: https://vjudge.net/problem/CodeForces-4A/origin
public class Solution{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int input = sc.nextInt();
        if(input >= 4 && input % 2 == 0)
            System.out.println("Yes");
        else
            System.out.println("No");
    }
}
