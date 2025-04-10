

class Student{
    private String name;

    public String getName(){
        return this.name;
    }

    public void setName(String name){
        this.name = name;
    }
}

class Demo {
    public static void main(String args[]){
        Student stu = new Student();
        stu.setName("Mo Amir");
        System.out.println(stu.getName());
    }
}