package cresco.ai.asciitobindroid.core;

import cresco.ai.asciitobindroid.core.AsciiToBin_Main;
import android.os.Bundle;
import android.app.Activity;
import android.view.Menu;

public class AsciiToBinStringActivity extends Activity {

private AsciiToBin_Main hMain;
	
	@Override
	protected void onCreate(Bundle savedInstanceState){
		super.onCreate(savedInstanceState);
		hMain = new AsciiToBin_Main(this);
		hMain.init();
	}
	@Override
	protected void onResume(){
		super.onResume();
		
	}
	@Override
	protected void onPause(){
		super.onPause();
		
	}
	@Override
	protected void onRestoreInstanceState(Bundle savedInstanceState){
		super.onRestoreInstanceState(savedInstanceState);
		
	}
	@Override
	protected void onRestart(){
		super.onRestart();
		
	}
	@Override
	protected void onDestroy(){
		super.onDestroy();
		
	}

}
