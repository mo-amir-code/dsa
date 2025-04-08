import java.util.*;


class Calc{
   public static void main(String args[]){
       Scanner sc = new Scanner(System.in);
       int a = sc.nextInt();
       int b = sc.nextInt();
       
       Calc cal = new Calc();
       cal.add(a, b);
       
       float x = sc.nextFloat();
       float y = sc.nextFloat();
       cal.add(x, y);   
   }

   void add(int a, int b){
      System.out.println(a+b);
   }
   void add(float a, float b){
      System.out.println(a+b);
   }
}
