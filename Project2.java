import java.util.*;
class Marks{
    int s1,s2,s3,s4,s5;
    public void calculateInfo(){
        //(s1+s2+s3+s4+s5);
        System.out.println("total is :"+(s1+s2+s3+s4+s5));
    }
}
class Average extends Marks{
    public void calculate(){
        System.out.println("Average :"+(s1+s2+s3+s4+s5)/5);
        //int average = total/5;
        //System.out.println(average);
    }
}

public class Project2{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Average m1 = new Average();
        System.out.println("Enter the marks of s1");
        m1.s1 = sc.nextInt();
        System.out.println("Enter the marks of s2");
        m1.s2 =  sc.nextInt();
        System.out.println("Enter the marks of s3");
        m1.s3 = sc.nextInt();
        System.out.println("Enter the marks of s4");
        m1.s4 = sc.nextInt();
        System.out.println("Enter the marks of s5");
        m1.s5 = sc.nextInt();
        m1.calculate();
        //m1.calculateInfo();




    }
}