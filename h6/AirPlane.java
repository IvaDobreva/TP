/*
Технологично училище "Електронни системи" към ТУ - София
www.elsys-bg.org
клас 11Б
номер 17
име Ива Йорданова Добрева

Задача: Да се създаде програме, която настанява пътниците в самолет спрямо бройката им.  
*/

import java.util.Random;

public class AirPlane {

	private int[][] seats = new int[27][6];
		
	public void print_seats() {
		for(int c=0; c<27; c++) {
			for(int n=0; n<6; n++) {
				
				System.out.print(seats[c][n]);
				if(n==2) {
					System.out.print("   ");
				}
			}
			System.out.println();
		}
	}
	
	public void add(int pass) {
		boolean s = false;
		for(int row=0; row<27; row++) {
			for(int col=0; col<6; col++) {
				if(seats[row][col]==0) {
					if(pass==1) {
						seats[row][col] =1;
						s=true;
						break;
					}
					if(pass == 2 && col<= 4) {
						if(seats[row][col+1] == 0 && col%3 <= 1) {
							seats[row][col] = 1;
							seats[row][col+1] = 1;
							s = true;
							break;
						}		
					}
						if(pass == 3 && col<=3) {
							if(seats[row][col] == 0 && seats[row][col+2] == 0 && col%3 == 0) {
								seats[row][col++] = 1;
								seats[row][col++] = 1;
								seats[row][col] = 1;
								s = true;
								break;
							}
						}			
				} else {
					continue;
				}
			}
			if(s == true) {
				break;
			}
		}
	}
	
	public boolean freeSeats() {
		for(int row=0; row<27; row++) {
			for(int col = 0; col<6; col++) {
				if(seats[row][col]==0) {
					return true ;
				}
			}
		}
		return false;
	}
	
	public static void main(String args[]) {
		AirPlane plane = new AirPlane();		
	    	plane.print_seats();
	    	System.out.println("#########");
	    	
	    	while(plane.freeSeats() == true) {
			int pass = new Random().nextInt(3)+1;
			plane.add(pass);
		}
	    	plane.print_seats();
		
	} 

}
