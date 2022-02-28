package bhagi;

import java.util.*;

public class arryRev {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
			
				Scanner s =new Scanner(System.in);
				int n= s.nextInt();
				int [] a=new int[n];
		        for(int i=0;i<n;i++)
		        {
		        	a[i]=s.nextInt();
		        }
		      
		        System.out.println("Revrse:");
				for(int i=a.length-1;i>=0;i--)
				{
					System.out.print(a[i]+" ");
			}
			}
}
