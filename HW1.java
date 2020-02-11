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
		
		while(scan.hasNextLine()) {
			String line = scan.nextLine();
			for (char ch : line.toCharArray()) {
				if(Character.toString(ch).matches(delimiter))
					System.out.print(ch);
				else {
					System.out.print("\n" + ch + "\n");
				}
			}
		}
	}

}
