import java.util.ArrayList;

import java.util.Collections;

import java.util.Comparator;

import java.util.List;

import java.util.Scanner;

 

public class ArrangeStudentNames {

 

public static void main(String[] args) {



 Scanner in = new Scanner(System.in);

      int testCases = Integer.parseInt(in.nextLine());

       

      List<Student> studentList = new ArrayList<Student>();

      while(testCases>0){

         int id = in.nextInt();

         String fname = in.next();

         double cgpa = in.nextDouble();

         

         Student st = new Student(id, fname, cgpa);

         studentList.add(st);

         

         testCases--;

      }  

         

         Collections.sort(studentList, new SortName());

       

         for(Student st: studentList){

         System.out.println(st.getFname());

      }

}

 

}

 

class SortName implements Comparator<Student>

{

@Override

public int compare(Student s1, Student s2) {

   int compare = s1.getFname().compareTo(s2.getFname());

   if((s1.getCgpa() < s2.getCgpa()) && (s1.getCgpa() != s2.getCgpa())){

       return 1;

   }

   else if((s1.getCgpa() == s2.getCgpa()) && (compare < 0))

       {

       return -1;

   }

   else if((s1.getCgpa() == s2.getCgpa()) && (compare > 0))

       {

       return 1;

   }

   else if((s1.getCgpa() == s2.getCgpa()) && compare == 0 && (s1.getId() < s2.getId()))

   {

       return 1;

   }

   else

       {

       return -1;

   }

  }

}  

 

class Student

{

   private int id;

   private String fname;

   private double cgpa;

   

   public Student(int id, String fname, double cgpa) {

      super();

      this.id = id;

      this.fname = fname;

      this.cgpa = cgpa;

   }

   public int getId() {

      return id;

   }

   public String getFname() {

      return fname;

   }

   public double getCgpa() {

      return cgpa;

   }

}








import java.io.*;
import java.util.*;

public class pal {

   public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
       

        String result ="Yes";
        int length = A.length();
        for (int i=0; i<length/2;i++){
            if(A.substring(i,i+1).equals(A.substring(length-i-1,length-i))) {         
            }else {
             result ="No";
            }
        }
        System.out.println(result);
    }
}






import java.util.Scanner;
import java.util.regex.*;

public class reg {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int testCases = Integer.parseInt(in.nextLine());
        while(testCases > 0){
            String pattern = in.nextLine();
            try {
                Pattern.compile(pattern);
                System.out.println("Valid");
            } catch (PatternSyntaxException e) {
                System.out.println("Invalid");
            }
            testCases--;
        }
    }
}