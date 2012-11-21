package com.wordpress.ivadobrevablog.h14;

import java.io.*;
import java.net.*;
import java.util.regex.*;

public class Page {
	private URL link;

	public Page(URL l) {
		link = l;
	}

	public void linksGet() throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(
				link.openStream()));
		Pattern linkPattern = Pattern.compile("(?i)<a([^>]+)>(.+?)</a>",  Pattern.CASE_INSENSITIVE|Pattern.DOTALL);
		String inputLine;
		while ((inputLine = in.readLine()) != null) {
			
				Matcher pageMatcher = linkPattern.matcher(inputLine);
				while(pageMatcher.find()){
					String newLink = pageMatcher.group(1).replaceAll("\"", "");;
				
					System.out.println(newLink);   
				    //System.out.println(pageMatcher.group(1));
 				}
			
			
		}
		in.close();
	}
}
