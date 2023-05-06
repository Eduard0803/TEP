import java.util.Scanner;
import java.util.Arrays;
// link: https://vjudge.net/problem/HackerRank-java-anagrams/origin
public class Solution{
    private static Scanner sc = new Scanner(System.in);
    public static void main(String[] args){
        if(is_anagram(sc.next().toLowerCase(), sc.next().toLowerCase()))
            System.out.println("Anagrams");
        else
            System.out.println("Not Anagrams");
    }
    private static boolean is_anagram(String s1, String s2){
        if(s1.length() != s2.length())
            return false;

        char[] v1 = s1.toCharArray();
        char[] v2 = s2.toCharArray();
        Arrays.sort(v1);
        Arrays.sort(v2);

        for(int i=0; i<v1.length; i++)
            if(v1[i] != v2[i])
                return false;
        return true;
    }
}
