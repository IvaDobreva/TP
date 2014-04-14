//sender_name, weight, type(short_distance, long_distance)

package example.blue.belt;

import java.util.*;

public class Package {

	private String sender_name;
	private int weight;
	private int distance;
	
	public Package(String name, int w, int d) {
		sender_name = name;
		weight = w;
		distance = d;
	}
	
	public int getWeight() {
		return weight;
	}
	
}
