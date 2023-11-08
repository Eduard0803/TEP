import java.util.*;
// link: https://vjudge.net/problem/HackerRank-java-output-formatting/origin
public class Solution{
    public static void main(String[] args){
        int count = 3;
        System.out.println("================================");
        while(count-->0)
            solution();
        System.out.println("================================");
    }
    private static Scanner sc = new Scanner(System.in);
    private static void solution(){
        String input = sc.next();
        int n = sc.nextInt();
        for(int i=input.length(); i<15; ++i)
            input += " ";
        if(n < 10 )
            input += "00" + n;
        else if(n < 100)
            input += "0" + n;
        else
            input += n;
        System.out.println(input);
    }
}
