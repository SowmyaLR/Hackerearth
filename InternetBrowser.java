import java.util.*;
import java.lang.*;
 
class InternetBrowser {
    public static void main(String args[] ) throws Exception {
 
 int test,i,count;
 	String web;
 	Scanner get = new Scanner(System.in);
 	test = get.nextInt();
 	while(test!=0)
 	{
 		count =0 ;
 		web = get.next();
 		int len = web.length();
		count = len;
 		for(i=4;i<len;i++)
 		{
 			if((web.charAt(i))=='a'||(web.charAt(i))=='e'||(web.charAt(i))=='i'||(web.charAt(i))=='o'||(web.charAt(i))=='u'){
			 count--;
			
			}
 			if(web.charAt(i)=='.')
 			break;
 		}
		count = count-4;
 		System.out.println(count+"/"+len);
 		test--;
 	}
    }
}
