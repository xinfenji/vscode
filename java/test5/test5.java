public class test5{
        public static void main(String[] args){
                Person p = new Person("XiaoMing", 15);
                System.out.println(p.getName());
                System.out.println(p.getAge());
        }
}
        class Person{
                private String name;
                private int age;

                public Person(String name, int age) {
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
/*
        class Person {
                private String name;
                private int age;

                public Person(String name,int age){
                        this.name=name;
                        this.age=age;
                }
                public Person(String name){
                        this.name=name;
                }
                public Person(){

                }
                Public person(String name) {
                        this(name,18);
                }
                Public Person() {
                        this("Unname");


                }
        }
*/
