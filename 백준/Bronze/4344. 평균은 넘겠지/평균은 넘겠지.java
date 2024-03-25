import java.util.Scanner;
public class Main {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int[] arr;
      int t = sc.nextInt();

      for(int i = 0 ; i < t ; i++) 
    {
         int student = sc.nextInt(); 
         arr = new int[student];
         double sum = 0;
      
         for(int j = 0 ; j < student ; j++) 
      {
            int score = sc.nextInt();    
            arr[j] = score;
            sum += score;   
         }
       double mean = (sum /student);
       double count = 0;

         for(int j = 0 ; j < student ; j++) 
      {
            if(arr[j] > mean) 
        {
               count++;
            }
      }
         System.out.printf("%.3f%%\n",(count/student)*100);
      }
   }
}