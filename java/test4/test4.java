public class test4{
    public static void main(String[] args){
        person p=new person ("Xiaoming",24);
        System.out.println(p.getName());
        System.out.println(p.getAge());
    }
    class person {
        private String name;
        private int age;

        public person(String name,int age) {
            this.name=name;
            this.age=age;
        }
        public String getName() {
            return this.name;
        }
        public int getAge() {
            return this.age;
        }
    }
}












/*
public class test4 {
    public static void main(String[] args) {
        Person ming = new Person();
        ming.setName("Xiao Ming"); // 设置name
        ming.setAge(12); // 设置age
        System.out.println(ming.getName() + ", " + ming.getAge());
    }
}

class Person {
    private String name;
    private int age;

    public String getName() {
        return this.name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return this.age;
    }

    public void setAge(int age) {
        if (age < 0 || age > 100) {
            throw new IllegalArgumentException("invalid age value");
        }
        this.age = age;
    }
}
*/