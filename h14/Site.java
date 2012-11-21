package com.wordpress.ivadobrevablog.h14;

import java.io.*;
import java.net.*;

public class Site {
	private URL url;
	
	public Site(URL l) {
		url = l;
	}

	public void protocol() {
		System.out.println("Protocol: " + url.getProtocol());
	}

	public void numPages() throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(
				url.openStream()));

		int c = 0;
		String inputLine;
		while ((inputLine = in.readLine()) != null) {
			if (inputLine.toLowerCase().contains("a href")) {
				c+=1;
			}
		}
		in.close();
		System.out.println("Number of links is: " + c);
	}
}
