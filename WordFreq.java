/*Count the frequency of each words using map*/

import java.io.*;
import java.util.*;
public class WordFreq
{
  public static void main(String args[]) throws Exception
  {
	String s1;
	int i=0;
 
	HashMap map = new HashMap();
	HashSet set = new HashSet();
	System.out.print("Enter File Name:");
  
	Scanner in = new Scanner(System.in); 
	s1 = in.nextLine();

	FileInputStream fis = new FileInputStream(s1);
  
	int ch;
	String string=new String();
	while((ch=fis.read())!=-1)
	{
		string+=(char)ch+"";
	}
	StringTokenizer st = new StringTokenizer(string);
	while(st.hasMoreTokens())
	{
		String s =st.nextToken();
		map.put(i+"",s);
		set.add(s);
		i++;
	}
	Iterator iter = set.iterator();
	System.out.println("occurance of words like this ");
	while(iter.hasNext())
	{
		String s2;
		int count=0;
   
		s2=(String)iter.next();
  
		for(int j=0; j<i ; j++)
		{
			String s3;
			s3=(String)map.get(j+"");
			if(s2.equals(s3))
			count++;
		}

		System.out.println(s2 +"\t"+ count);
	}
	}
}

/*
Enter File Name:file1.txt
occurance of words like this
this    1
Hii     2
Welcome 2
to      1
page    1
*/