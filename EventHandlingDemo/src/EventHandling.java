import java.awt.*;
import java.awt.event.*;

public class EventHandling extends Frame implements KeyListener{
	
	Label l;
	TextField t;
	TextArea ta;
	EventHandling()
	{
		setSize(300,300);
		setVisible(true);
		setLayout(new FlowLayout());
		l = new Label("Enter Anything");
		add(l);
		t = new TextField(20);
		add(t);
		t.addKeyListener(this);
		ta = new TextArea(30,70);
		add(ta);
		ta.setEditable(false);
		
	}
	public void keyPressed(KeyEvent e)
	{
		ta.append("Key pressed "+e.getKeyCode()+"\n");
	}
	public void keyReleased(KeyEvent e)
	{
		
	}
	public void keyTyped(KeyEvent e)
	{
		ta.append("Key typed "+e.getKeyChar()+"\n");
	}
	
	
	public static void main(String[] args) {
		
		new EventHandling();


	}

}