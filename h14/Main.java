package com.wordpress.ivadobrevablog.h14;

import java.io.IOException;
import java.net.*;

public class Main {
	public static void main(String[] args) throws IOException {
		
		try {
            URL url = new URL("http://elsys-bg.org");
            
            Page newpage = new Page(url);
    		Site newsite = new Site(url);
    		Link newlink = new Link(url);
            
            newsite.protocol();
            newsite.numPages();
            
            newpage.linksGet();
            
            newlink.pageGet();
		 
		 } catch (MalformedURLException e) {
	            e.printStackTrace();
		 }
		
		
	}
}
