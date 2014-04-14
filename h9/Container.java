package ballsAndBoxes;

import java.util.ArrayList;

public class Container {
	private int max = 10;
	private ArrayList<Ball> container = new ArrayList<Ball>(max);
	
	public void add(Ball b) {
		if (container.size() != max ) {
			if(container.contains(b)) {
				System.out.println("This ball is already in.");
			} else {
				container.add(b);
			}
		} else {
			System.out.println("Container is full!");
		}
		
	}
	public void remove(Ball b) {
		container.remove(b);
	}
	
	public void getCapacity() {
		int capacity = max - container.size();
		System.out.println("Container's capacity is " + capacity );
	}
	
	public void size() {
		System.out.println("Container's size is "+ max);
	}
	
	public void contains(Ball b) {
		System.out.println(container.contains(b));
	}
	
	public void clear() {
		if(container.isEmpty()) {
			System.out.println("Container is already empty!");
		} else {
			container.clear();
			System.out.println("Container is now empty.");
		}
	}
}
