package ballsAndBoxes;

public class Main {
	
	public static void main(String[] args) {
		Container ballContainer = new Container();
		Ball b1 = new Ball(5);
		Ball b2 = new Ball(6);
		Ball b3 = new Ball(7);
		Ball b4 = new Ball(10);
		
		ballContainer.add(b1);
		ballContainer.remove(b1);
		ballContainer.add(b2);
		ballContainer.add(b3);
		ballContainer.getCapacity();
		ballContainer.size();
		ballContainer.contains(b4);
		ballContainer.contains(b3);
		ballContainer.clear();
		ballContainer.clear();
	}
}
