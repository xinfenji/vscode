
// private field


public class test3{
        public static void main(String[] args){
                Person ming = new Person();
                ming.name = setname("Xiaoming");
                ming.age = setAge(22);
                System.out.println(ming.getName() +"," + ming.getAge());
        }
}

        class Person {
                private String name;
              //  provate float x;
                private int age;


                public String getName(){
                       return this.name;
                }

        
        public void setname(String name){
                this.name = name;
        }
        public void setAge(int age){
                if(age<0||age>100){
                        throw new IllegalArgumentException("Invalid age value");
                }
                this.age = age;
        }
        public int getAge(){
                return this.age;
        }
       


}