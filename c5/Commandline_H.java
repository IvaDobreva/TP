import java.util.Arrays;
import java.util.Collections;

public class Commandline_H {
	public static void main(String[] args){
		int l=args.length;

		String prop[] = new String[l]; //Array of type String to store properties
		int i=0;
		for(String str : args) {
			if(System.getProperty(str)!=null) {
				prop[i] = System.getProperty(str);
				i++;
			}
		}

		String array[] = new String[i]; //Array only for valid properties
		System.arraycopy(prop, 0, array, 0, i); //Copy only valid properties

		if(args[args.length-1].equals("up")) {
			Arrays.sort(array);
		} else if(args[args.length-1].equals("down")) {
			Arrays.sort(array, Collections.reverseOrder());
		} 
		
		for(int c=0; c<i; c++) {
			System.out.println(array[c]);
		}
	}
}
