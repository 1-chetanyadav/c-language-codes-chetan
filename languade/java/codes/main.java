import java.util.Scanner;

//CHAPTER 1 OF JAVA
public class Main {
    static int sum(int a,int b){
int c=a+b;
        System.out.println("the sum of a and b is :"+c);
        return 0;
    }
    public static void main(String[] args) {
        //light grey means unused
        //sout shortcut ,, ctrl + / ,,

       //basic print
        System.out.printf("MY PAIN IS FAR GREATER THAN YOURS");

        // varibles
        int a=15;
        float b=69.3f;
        //f is used in last of float
        String c="chetan";
        boolean bgmiplayer=true;
        System.out.println(" ");
      /*  System.out.println(a);
        System.out.println(b);
        System.out.println(c);
        System.out.println(bgmiplayer);
*/
        //inputs
        Scanner scan = new Scanner(System.in);
        System.out.println("type something dear");
        String user = scan.nextLine();

        System.out.println(user);
   /*     System.out.println(user.toUpperCase());
        System.out.println(user + "thik hai bhai\" " + c);
        System.out.println("hi" + "iam\n" + "bye");
    */
        /*
        System.out.println(user.contains("a"));
        System.out.println(user.charAt(2)); //0.1.2
        System.out.println(user.endsWith("an"));
        System.out.println(user.indexOf("he")); */

        //math
//        int d=9 ,p=6;
//        System.out.println(Math.max(d, p)) ;
//        System.out.println(Math.abs(-99));
//        System.out.println(2+(5-2)*Math.random());

        //if-else
        int z=5;
        if(z<2)
        {
            System.out.println("z is less than 2");
        }
        else{
            System.out.println("z is greater than 2");
        }

        //loop>for ,, while ,, switch
        //break ,, continue
//
//        for(;z<15;z++)
//        {
//            System.out.println("z is :" + z );
//        }
        //same with switch and while

        Scanner scan2 = new Scanner(System.in);
        System.out.println("TYPE AGE ?");
        int age = scan2.nextInt();
//if (age>10 && age<18)
//{
//    System.out.println("you are boi ");
//    } else if (age>18) {
//    System.out.println("you are adult 18+");
//}
//else {
//    System.out.println("kid u");
//}
int []arr={2,6,4,5};
arr[2]=9;
       //no work > System.out.println(arr);

//    for (int i=0;i<6;i++)
//    {
//        System.out.println(arr[i]);
//    }

        //alternate
        for(int value:arr){
    System.out.println(value);
}
        int [][]arr2={{1,2},{1,22}};
        System.out.println(arr2[0][1]);
        String []mobile={"oppo","vivo","oneplus"};
        try{
            System.out.println(mobile[4]);
        }
        catch (Exception x){
            System.out.println("Hello user \n"+"The error is : " +x);
        }
        Scanner scana = new Scanner(System.in);
        Scanner scanb = new Scanner(System.in);
        System.out.println("value of a and b :");
        int sa = scana.nextInt();
        int sb= scanb.nextInt();
        sum(sa, sb);
    }}