import java.applet.Applet;
import java.awt.*;

public class applet extends Applet implements Runnable {
    int counter;
    Thread t;

    public void init() {
        counter = 0;
        t = new Thread(this);
        t.start();
    }

    public void run() {
        try {
            while (true) {
                repaint();
                Thread.sleep(1000);
                ++counter;
            }
        } catch (Exception e) {
        }
    }

    public void paint(Graphics g) {
        showStatus("Siddhartha 01296402719 ");
        g.setFont(new Font("Serif", Font.BOLD, 60));
        FontMetrics fm = g.getFontMetrics();
        String s = "" + counter;
        Dimension d = getSize();
        int x = d.width / 2 - fm.stringWidth(s) / 2;
        int y = d.height / 2;
        g.drawString(s, x, y);
    }
}
/*
<applet code="applet" width=400 height=400>
</applet>
*/