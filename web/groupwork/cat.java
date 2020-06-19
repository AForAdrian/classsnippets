import javax.swing.*;
import java.awt.*;
import javax.swing.filechooser.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

 
public class Login extends JFrame implements ActionListener { 
    JLabel l0, l1, l2;
    JTextField textf;
    JButton btn0, btn1;
    JPasswordField passw;
    JFileChooser fc;
     
 public  Login(){
    setVisible(true);
    setSize(700, 700);
    setLayout(null);
    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    setTitle("Login");

    l0 = new JLabel("Login Details");
    l1 = new JLabel("Username:");
    l2 = new JLabel("Password:");
    textf = new JTextField();
    passw = new JPasswordField();
    
    btn0 = new JButton("Login");
    btn1 = new JButton("Sign Up");
    fc = new JFileChooser("Select");

    l0.setBounds(300, 110, 400, 30);
    l1.setBounds(80, 160, 200, 30);
    l2.setBounds(80, 210, 200, 30);
    textf.setBounds(300, 160, 200, 30);
    passw.setBounds(300, 210, 200, 30);
    btn0.setBounds(250, 270, 100, 30);
    btn1.setBounds(370, 270, 100, 30);
    fc.setBounds(500, 400, 100, 30);

    add(l0);
    add(l1);
    add(l2);
    add(textf);
    add(passw);
    add(btn0);
    add(btn1);
    add(fc);
    
 
    public static void main(String args[])
   {
        new Login();
    }
}



  