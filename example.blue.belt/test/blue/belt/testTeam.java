package blue.belt;

import static org.junit.Assert.*;

import java.util.ArrayList;

import org.junit.Before;
import org.junit.Test;

public class testTeam {

	Team members;
	Member m1, m2, m3, m4;
	
	@Before
	public void setUp() {
		members = new Team();
		m1 = new Member("female", "fsef", 20);
		m2 = new Member("male", "sfe", 10);
		m3 = new Member("female", "fss", 30);
		m4 = new Member("male", "bb", 40);

		members.addM(m1);
		members.addM(m2);
	}

	@Test
	public void testAddM() {
		assertTrue(members.addM(m3));
		assertFalse(members.addM(m4));
	}
	
	@Test public void testRemoveM() {
		assertTrue(members.removeM(m1));
		assertFalse(members.removeM(m3));
	}
	
	@Test public void getAvAge() {
		assertEquals(15, members.getAvAge());
	}
	
	@Test public void containsMname() {
		
		assertTrue(members.containsMname("fsef"));
		assertFalse(members.containsMname("bb"));
	}
	
	@Test public void testGetSortedGA() {
		members.addM(m3);
		ArrayList<Member> newMembers = new ArrayList<Member>();
		newMembers.add(m1);
		newMembers.add(m3);
		newMembers.add(m2);
		
		assertEquals(newMembers, members.getSortedGA());
	}

}
