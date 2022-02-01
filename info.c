
public class Main
{
   public static void main(String[] args)
   {
   Scanner s = new Scanner(System.in);
       System.out.println("Enter your name:");
       String name = s.next();
       System.out.println("Enter your age:");
       int age = s.nextInt();
       System.out.println("Enter your favourite food:");
       String food = s.next();
       System.out.println("My name is: "+name+" and my favourite food is "+food+"!");
       System.out.println("***");
       System.out.println("I am "+age+" years old and in 2 years I will be "+(age+2)+"!");
   }
}
