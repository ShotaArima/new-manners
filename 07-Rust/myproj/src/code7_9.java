class Person {
    private String name;
    private int age;
    ...
}

public class Main {
    public static void main(String[] args){
        Person p = new Person();
        p.setName("John");
        p.setAge(20);
        System.out.println("name="+p.getName());
        System.out.println("age="+p.getAge());
    }
}