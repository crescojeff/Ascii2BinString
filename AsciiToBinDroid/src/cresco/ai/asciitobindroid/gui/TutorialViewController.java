package cresco.ai.asciitobindroid.gui;

import android.view.LayoutInflater;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;
import cresco.ai.asciitobindroid.core.AsciiToBin_Main;
import cresco.ai.asciitobindroid.core.R;

public class TutorialViewController extends View implements OnClickListener{
	
	private AsciiToBin_Main hMain;
	private LayoutInflater mvInflater;
	private View mvTutorialView;
	private Button mvToConversionB;
	
	public TutorialViewController(AsciiToBin_Main main){
		super(main.getAct());
		hMain = main;
		
	}
	
	public void initGUI(){
		
		mvInflater = (LayoutInflater) hMain.getAct().getSystemService(hMain.getAct().LAYOUT_INFLATER_SERVICE);
		mvTutorialView = mvInflater.inflate(R.layout.tutorial_layout, hMain.getRootViewFlipper(),false);
		hMain.getRootViewFlipper().addView(mvTutorialView);
		
		mvToConversionB = (Button)hMain.getAct().findViewById(R.id.tutorial_Conversion_B);
		
		mvToConversionB.setOnClickListener(this);
	}

	@Override
	public void onClick(View v) {
		if(v==mvToConversionB){
			//hMain.getRootViewFlipper().setDisplayedChild(0);
			hMain.getRootViewFlipper().showNext();
			//hMain.getAct().setContentView(R.layout.conversion_layout);
		}
	}

}
