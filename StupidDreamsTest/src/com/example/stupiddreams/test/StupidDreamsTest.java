package com.example.stupiddreams.test;

import org.powermock.api.easymock.PowerMock;
import org.powermock.api.easymock.internal.invocationcontrol.EasyMockMethodInvocationControl;

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
import android.view.Menu;
import android.view.MenuItem;

public class StupidDreamsTest extends
		ActivityInstrumentationTestCase2<StupidDreams> {

	private int buttonId;
	private StupidDreams activity;
	private Bundle bundle;

	public StupidDreamsTest() {
		super(StupidDreams.class);
	}

	@Override
	protected void setUp() throws Exception {
		super.setUp();
		setActivityInitialTouchMode(false);
		activity = getActivity();
	}

	public void testFragmentManager() {
	    FragmentActivity activity = getActivity();
	    assertNotNull(activity.getSupportFragmentManager());
	}
	
	@Override
	protected void tearDown() throws Exception {
		super.tearDown();
	}
}
