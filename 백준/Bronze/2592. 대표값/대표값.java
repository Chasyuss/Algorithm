import java.util.Scanner;
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

     int arr[] = new int[10];
     int arr2[] = new int[1000];
     int sum =0; 
     int average=0; 
     int max =0;

     for(int i=0; i<arr.length;i++)
     {
       arr[i] = sc.nextInt();
       average += arr[i];
       arr2[arr[i]]++;
     }
    for(int i=0; i<1000; i++)
     {
       if((arr2[i] !=0) && (max < arr2[i]))
       {
         max = arr2[i];
         sum = i; 
       }
     }
    System.out.println(average/10);
    System.out.println(sum);
  }
}