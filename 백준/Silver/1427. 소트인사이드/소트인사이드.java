import java.util.Scanner;
public class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    int[] cnt = new int[10];
    int n = sc.nextInt();

    while(n!=0)
    {
      cnt[n%10]++;
      n /=10;
    }
    for(int i=9; i>=0; i--)
    {
      while(cnt[i]-- >0)
      {
        System.out.print(i);
      }
    }
  }
}