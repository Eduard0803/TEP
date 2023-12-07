import java.util.Scanner;
// link: https://vjudge.net/problem/HackerRank-java-1d-array-introduction/origin
class Solution{
    private static Scanner sc = new Scanner(System.in);
    public static void main(String[] args){
        int n = sc.nextInt();
        int[] v = new int[n];

        for(int i=0; i<n; ++i)
            v[i] = sc.nextInt();
        for(int i : v)
            System.out.println(i);
    }
}
