/*Пример: Да се създаде клас за спедиторска фирма. 
 * Класът се казва Company и има следните свойства и методи: 
 * add_package, remove_package, clear, get_weight_sum, 
 * get_long_distance_packages_from_smallest. 
 * Компанията може да получава пратки от типа 
 * Package(sender_name, weight, type(short_distance, long_distance)). 
 * Методът get_long_distance_packages_from_smallest връща списък от всички пакети
 * от тип long_distance сортирани от най-лекия към най-тежкия.
 * Да се разработи структурата от класове както и JUnit, 
 * RSpec или като цяло unit тестове за приложението. Търси се 100% покритие на кода и на функционалността.*/

package example.blue.belt;

import java.util.ArrayList;
import java.util.Collections;

public class Company {
	private int maxP = 3;
	
	ArrayList<Package> packageList = new ArrayList<Package>(maxP);
	
	
	//add_package()
	boolean add_package(Package p) {
		if(packageList.size() < maxP) {
			packageList.add(p);
			return true;
		}
		return false;
	}
	//remove_package
	boolean remove_package(Package p) {
		if(packageList.contains(p)) {
			packageList.remove(p);
			return true;
		}
		return false;
	}
	//clear
	boolean clear() {
		if(packageList.size() != 0) {
			packageList.clear();
			return true;
		}
		return false;
	}
	//get_weight_sum
	int get_weight_sum() {
		int sum = 0;
		
		for(int i=0; i<packageList.size(); i++) {
			sum += packageList.get(i).getWeight();
		}
		return sum;
	}
	//get_long_distance_packages_from_smallest
	boolean get_long_distance_packages_from_smallest() {
		if(packageList.size() != 0) {
			ArrayList<Package> packL = new ArrayList<Package>(maxP);
			Collections.sort(packageList, packL);
		}
	}
	
	/*
	 * 
	 * public ArrayList<Package> getLongDistancePackagesFromSmallest() {
		ArrayList<Package> longDistancePackages = new ArrayList<Package>();

		for (Package p : packages) {
			if (p.getType().equals("long")) {
				longDistancePackages.add(p);
			}
		}

		Collections.sort(longDistancePackages, new Comparator<Package>() {
			public int compare(Package p1, Package p2) {
				return p1.getWeight() - p2.getWeight();
			}
		});

		return longDistancePackages;
	}
	 */
}
