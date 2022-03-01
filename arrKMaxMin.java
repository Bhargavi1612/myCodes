package bhagi;
import java.util.*;
public class kMaxMin {
public static void main(String[] args) {
	Scanner s = new Scanner(System.in);
	int n= s.nextInt();
	int k= s.nextInt();
	int []a=new int[n];
//	System.out.println("enter k");
	for(int i=0;i<n;i++)
	{
		a[i]=s.nextInt();
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				}
		}
	}
	for(int i=0;i<n;i++)
	{
		System.out.print(a[i]+" ");
	}
	System.out.println();
	for(int i=0;i<n;i++)
	{
		if(k==i+1)
		{
			System.out.println(k+"nd smallest"+a[i]);
		}
	}

	for(int i=0;i<n;i++)
	{
		if(k==i+1)
			System.out.print(k+"nd largest "+a[n-k]);
		
	}
}
}
