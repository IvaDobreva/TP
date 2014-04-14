package blue.belt;

public class Member {

	private String gender;
	private String name;
	private int age;
	
	public Member(String gender, String name, int age) {
		this.gender = gender;
		this.name = name;
		this.age = age;
	}
	
	public int getAge() {
		return age;
	}
	
	public String getName() {
		return name;
	}
	
	public String getGender() {
		return gender;
	}
}
