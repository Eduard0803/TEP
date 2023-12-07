import java.util.Scanner;
// link: https://vjudge.net/problem/HackerRank-java-string-reverse/origin
class Solution{
    private static Scanner sc = new Scanner(System.in);
    public static void main(String[] args){
        String input = sc.next();
        System.out.println((solve(input) ? "Yes" : "No"));
    }

    private static boolean solve(String str){
        for(int i=0, k=str.length()-1; i<k; ++i,--k)
            if(str.charAt(i) != str.charAt(k))
                return false;
        return true;
    }
}
