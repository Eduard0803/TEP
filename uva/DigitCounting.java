import java.util.*;
// link: https://vjudge.net/problem/UVA-1225/origin
public class Main{
    private static Scanner sc = new Scanner(System.in);
    public static void main(String[] args){
        int occurrences = sc.nextInt();

        while(occurrences-- > 0)
            solution();
    }
    private static void solution(){
        int n = sc.nextInt(); // recebe o numero
        String numbers = ""; // instancia a string

        for(int i=1; i<=n; i++) // concatena os numeros na string
            numbers += i;
        
        char[] v = numbers.toCharArray(); // transforma a string em um array de char
        int[] hash = new int[10]; // instancia um array de int
        
        for(int i=0; i<v.length; i++)
            hash[(v[i]-48)]++;
        
        for(int i=0; i<9; i++)
            System.out.print(hash[i] + " ");
        System.out.println(hash[9]);
    }
}
