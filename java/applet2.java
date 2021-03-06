import java.applet.Applet;
import java.awt.Dimension;
import java.awt.Font;
import java.awt.FontMetrics;
import java.awt.Graphics;
 
/* 
<applet code = "applet2" width = 500 height = 300>
</applet>
*/
 
/*
 Using paint() method we can draw strings, shapes or images. 
 But when applets that use threads commonly need to update the display
 (ex. Animation or simulation).
 
 You cannot invoke the paint method directly to update the display. 
 The reason is that the JVM schedules a number of important tasks. Updating 
 the dispaly is one of these. The JVM decides when the screen can be updated. 
 
 Therefore, your applet must invoke the repaint() method to request 
 an update of the applet display. When the JVM determines that it is 
 appropriate to perform this work, it calls the update method.
 
 The default implementation of the update() method clears the applet
 display with the background color and then invokes the paint() method.
*/ 
 
public class applet2 extends Applet implements Runnable{
 int counter;
 Thread t;
 
 public void init(){
 
 counter = 0;
 t = new Thread(this);
 t.start();
 }
 
 public void run(){
 
 try{
 
 while(true){
 repaint();
 Thread.sleep(1000);
 ++counter;
 }
 }
 catch(Exception e){
 }
 }
 
 public void paint(Graphics g){
    showStatus("00396402719 Shubham Gulia");
 
 g.setFont(new Font("Serif",Font.BOLD,30));
 FontMetrics fm = g.getFontMetrics();
 String s = "" + counter;
 Dimension d = getSize();
 int x = d.width/2 - fm.stringWidth(s)/2;
 int y = d.height/2;
 g.drawString(s,x,y);
 }
}