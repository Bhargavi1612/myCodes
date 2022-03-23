import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner s=new Scanner(System.in);
      while(true)
      {
         int n=s.nextInt(); 
        if(n!=42)
        System.out.println(n);
        else if(n==42)
        break;
    }
    }    
}
