package com.wordpress.ivadobrevablog.h14;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.*;

public class Link {
	private URL url;
	
	public Link(URL l) {
		url = l;
	}
	
	public void pageGet() {
		try {
			BufferedReader reader = new BufferedReader(new InputStreamReader(
					url.openStream()));
			BufferedWriter writer = new BufferedWriter(new FileWriter(
					"data.html"));

			String line;
			while ((line = reader.readLine()) != null) {
				
				writer.write(line);
				writer.newLine();
			}

			reader.close();
			writer.close();

		} catch (MalformedURLException e) {
			e.printStackTrace();
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
}
