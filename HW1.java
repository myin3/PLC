import java.io.File;
import java.io.*;
import java.util.*;
import java.util.regex.*;
import java.util.regex.Pattern;


public class HW1 {

	public static void main(String[] args) throws Exception {
		
		File files = new File("test.txt");
		
		Scanner scan = new Scanner(files);
		
		String delimiter = "([A-Za-z0-9]*)";
		
		
		int index = 0;
		String line = scan.nextLine();
		int lineLength = line.length();
			
			
		while(index != lineLength) {
			char ch = line.charAt(index);
			if(Character.toString(ch).matches(delimiter))
				System.out.print(ch);
			else {
				System.out.print("\n" + ch + "\n");
			}
			index++;
		}
		
		
	}

}
