import java.util.Scanner;

class trying{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String chars = scan.nextLine();
        int[] char_counts = new int[128];
        for(char c : chars.toCharArray()){
            char_counts[c]++;
        }
        int ans = 0;
        for (int v: char_counts) {
            ans += v / 2 * 2;
            if (ans % 2 == 0 && v % 2 == 1)
                ans++;
        }
        System.out.println(char_counts);
    }
}