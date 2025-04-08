import java.util.*;

class Car {
   String color;
   Car(String c){
      color = c;
   }
   public static void main(String args[]){
      Scanner sc = new Scanner(System.in);
      Car c1 = new Car("red");
      c1.displayColor();
   }
   void displayColor(){
      System.out.println(color);
   }
}
