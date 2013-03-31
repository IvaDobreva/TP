package com.example.stupiddreams;

import java.io.IOException;

import java.io.InputStream;
import java.net.MalformedURLException;
import java.net.URL;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;
import org.xmlpull.v1.XmlPullParserFactory;

import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.support.v4.app.ListFragment;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.Toast;

import com.example.stupiddreams.R;

public class ShowXMLContent extends ListFragment {
	
	public ShowXMLContent() {
		// TODO Auto-generated constructor stub
	}
	
	private ArrayList<String> headlines = new ArrayList<String>();
	private ArrayList<String> links = new ArrayList<String>();


	public InputStream getInputStream(URL url) {
		try {
			return url.openConnection().getInputStream();
		} catch (IOException e) {
			return null;
		}
	}

	public void newsParser(String link) {

		try {
			URL url = new URL(link);

			XmlPullParserFactory factory = XmlPullParserFactory.newInstance();
			factory.setNamespaceAware(false);
			XmlPullParser xpp = factory.newPullParser();
			xpp.setInput(getInputStream(url), "UTF_8");

			boolean insideItem = false;

			// Returns the type of current event: START_TAG, END_TAG, etc..
			int eventType = xpp.getEventType();

			while (eventType != XmlPullParser.END_DOCUMENT) {
				if (eventType == XmlPullParser.START_TAG) {

					if (xpp.getName().equalsIgnoreCase("item")) {
						insideItem = true;
					} else if (xpp.getName().equalsIgnoreCase("title")) {
						if (insideItem)
							headlines.add(xpp.nextText()); // extract the
															// headline

					} else if (xpp.getName().equalsIgnoreCase("link")) {
						if (insideItem)
							links.add(xpp.nextText()); // extract the link of
														// article
					}
				} else if (eventType == XmlPullParser.END_TAG
						&& xpp.getName().equalsIgnoreCase("item")) {
					insideItem = false;
				}

				eventType = xpp.next(); // move to next element
			}

		} catch (MalformedURLException e) {
			e.printStackTrace();
		} catch (XmlPullParserException e1) {
			e1.printStackTrace();
		} catch (IOException e2) {
			e2.printStackTrace();
		}

	}

	@Override
	public void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		Bundle arg = this.getArguments();
		String link = arg.getString(null);
		newsParser(link);
		ListAdapter myListAdapter = new ArrayAdapter<String>(getActivity(),
				android.R.layout.simple_list_item_1, headlines);
		setListAdapter(myListAdapter);
	}

	@Override
	public View onCreateView(LayoutInflater inflater, ViewGroup container,
			Bundle savedInstanceState) {
		return inflater.inflate(R.layout.fragment_stupid_dreams_news, container, false);
	}

	@Override
	public void onListItemClick(ListView l, View v, int position, long id) {
		// TODO Auto-generated method stub
		Intent browserIntent = new Intent(Intent.ACTION_VIEW, Uri.parse(links.get(position)));
		startActivity(browserIntent);
		Toast.makeText(getActivity(),
				getListView().getItemAtPosition(position).toString(),
				Toast.LENGTH_LONG).show();
	}


}
