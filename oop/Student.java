import java.util.*;

class Student{
    String name;
    int age;

    Student(String n, int a){
       name = n;
       age = a;
    }    

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String n = sc.nextLine();
        int a = sc.nextInt();
    

        Student stu = new Student(n, a);
        stu.displayDetails();	
    }

    void displayDetails(){
       System.out.println("Name: " + name);
       System.out.println("Age: " + age);
    }
}
