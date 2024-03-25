import java.util.Scanner;
public class Main{
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
      
		int[] counts = new int[10];
		int n = a * b * c;

		while (n > 0) {
			counts[n % 10]++;
			n /= 10;
		}
		for (int i=0; i < counts.length; i++) {
			System.out.println(counts[i]);
		}
	}
}