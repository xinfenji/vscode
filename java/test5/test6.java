publid class test6{
        public static void main(String[] args){
                Person p=new Person("Xiao ming",18);\
                System.out.println(p.getName());
                System.out.println(p.getAge());
        }
        class Person{
                private String name;
                private int age;

                public Person(String name,int age){
                        this.name=name;
                        this.age=age;


                }
                public String getName(){
                        return this.name;
                }
                public int age(){
                        return this.age;
                }
        }
}