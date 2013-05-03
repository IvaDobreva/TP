package com.example.stupiddreams.test;

import com.example.stupiddreams.StupidDreams;

import android.app.ActionBar;
import android.app.FragmentManager;
import android.content.Intent;
import android.os.Bundle;
import android.preference.PreferenceActivity;
import android.preference.PreferenceFragment;
import android.support.v4.app.FragmentActivity;
import android.test.ActivityInstrumentationTestCase2;
import android.test.ActivityUnitTestCase;

public class StupidDreamsTest extends ActivityInstrumentationTestCase2<StupidDreams>{

	private int buttonId;
	private StupidDreams activity;
	private Bundle bundle;
	
	public StupidDreamsTest() {
		super(StupidDreams.class);
	}
	
	@Override
	protected void setUp() throws Exception {
		super.setUp();
		activity = getActivity();
		
	}
	

	@Override
	protected void tearDown() throws Exception {
		super.tearDown();
	}
}
