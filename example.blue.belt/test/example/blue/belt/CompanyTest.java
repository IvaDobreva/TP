package example.blue.belt;

import static org.junit.Assert.*;

import org.junit.Test;
import org.junit.Before;

public class CompanyTest {

	private Company packageList;
	private Package p1, p2, p3, p4;
	
	@Before
	public void setUp() {
		packageList = new Company();
		p1 = new Package("dfse", 5, 10);
		p2 = new Package("dfse", 5, 10);
		p3 = new Package("dfse", 5, 10);
		p4 = new Package("dfse", 5, 10);
		packageList.add_package(p1);
		packageList.add_package(p2);
		//packageList.add_package(p3); //Break add
	}
	
	@Test
	public void testAddPackage() {
		assertTrue(packageList.add_package(p3));
		assertFalse(packageList.add_package(p4));
	}
	
	@Test
	public void testRemovePackage() {
		//Break remove
		//assertTrue(packageList.remove_package(p4));
		//assertFalse(packageList.remove_package(p1));
		assertTrue(packageList.remove_package(p1));
		assertFalse(packageList.remove_package(p1));
	}
	
	@Test
	public void testClear() {
		assertTrue(packageList.clear());
		
		packageList.remove_package(p1);
		packageList.remove_package(p2);
		assertFalse(packageList.clear());
	}
	
	@Test
	public void testGetWeightSum() {
		assertEquals(10, packageList.get_weight_sum());
	}

}
