/*Пример: Да се създаде клас за отбор.
 * Класът се казва Team и има следните свойства и методи:
 * add_member, remove_member, get_average_age, contains_member_with_name(name), get_members_sorted_by_gender_and_age.
 * Отборът може да има играчи от тип  Member(gender(male, female), name, age).
 * Методът get_members_sorted_by_gender_and_age връща сортиран списък
 * където първо са играчите от тип female сортирани от най-ниската към най-високата възраст,
 * след което играчите от тип male сортирани от най-ниската към най-високата възраст.
 * Методът contains_member_with_name(name) проверява дали отборът имам играч с даденото име.
 */

package blue.belt;

import java.util.*;

public class Team {
		private int size = 3;
		
		ArrayList<Member> list = new ArrayList<Member>(size);
		
		public boolean addM(Member m) {
			if(list.size()<size) {
				list.add(m);
				return true;
			}
			return false;
		}
		
		public boolean removeM(Member m) {
			if(list.contains(m)) {
				list.remove(m);
				return true;
			}
			return false;
		}
		
		public int getAvAge() {
			int av = 0;
			int b=0;
			for(Member m: list) {
				av += m.getAge();
				b++;
			}
			return av/b;
		}
		
		public boolean containsMname(String name) {
			for(Member m: list) {
				if(m.getName().equals(name)) {
					return true;
				}
			}
			return false;
		 }
		
		
		public ArrayList<Member> getSortedGA() {
			ArrayList<Member> female = new ArrayList<Member>();
			ArrayList<Member> male = new ArrayList<Member>();
			
			for(Member m: list) {
				if(m.getGender().equals("female")) {
					female.add(m);
				} else {
					male.add(m);
				}
			}
			
			Comparator comparator = new Comparator<Member>() {

				@Override
				public int compare(Member m1, Member m2) {
					return m1.getAge() - m2.getAge();
				}
				
			};
			
			Collections.sort(female, comparator);
			Collections.sort(male, comparator);
			list.clear();
			list.addAll(female);
			list.addAll(male);
			return list;
		}
		
}

