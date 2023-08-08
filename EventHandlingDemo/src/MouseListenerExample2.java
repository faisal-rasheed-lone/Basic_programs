
import java.awt.*;  
import java.awt.event.*;  
public class MouseListenerExample2 extends Frame implements MouseListener{  
	TextField t;
    MouseListenerExample2(){  
    	
        addMouseListener(this);  
          t = new TextField(20);
        setSize(300,300);  
        setLayout(null);  
        setVisible(true);
        add(t);
        t.addMouseListener(this);
        t.setBounds(50, 100, 100, 20);
        t.setBackground(Color.lightGray);
    }  
    public void mouseClicked(MouseEvent e) {  
        Graphics g=getGraphics();  
        g.setColor(Color.BLUE);  
        g.fillOval(e.getX(),e.getY(),6,6);  
    }  
    public void mouseEntered(MouseEvent e) {
    	  t.setText("mouse Entered");
    	  t.setBackground(Color.yellow);
    	 
    }  
    public void mouseExited(MouseEvent e) {
    	t.setText("mouse Exited");
    	t.setBackground(Color.gray);
    	
    }  
    public void mousePressed(MouseEvent e) {
    	t.setText("mouse Pressed");
    }  
    public void mouseReleased(MouseEvent e) {
     	t.setText("mouse Released");
     	t.setBackground(Color.LIGHT_GRAY);
    }  
      
public static void main(String[] args) {  
    new MouseListenerExample2();  
}  
}  