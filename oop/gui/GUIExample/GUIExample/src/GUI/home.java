//bunch of normal imports
import javax.swing;
import java.awt.*;

public class Home extends JFrame implements ActionListener{
    //declare the element variables
    JLabel l0;
    JButton jb0, jb1, jb2;

    public Home(){
        setVisible(true);
        setSize(300,300);
        setLayout(null);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setTitle('HOME');

        //defining the title label
        l0 = new JLabel("HOME");
        l0.setForeground(Color.blue);
        l0.setFont(new Font("Serif", Font.BOLD, 30));

        //instantiate the buttons
        jb0 = new JButton("Apply");
        jb1 = new JButton("View Status");
        jb2 = new JButton("Update Profile");

        //have set the bounds
        lo.setBounds(50,10,80,30)
        jb0.setBounds(80, 30, 120, 30);
        jb1.setBounds(80, 70, 120, 30);
        jb2.setBounds(80, 110, 120, 30);

        //add the elements on the screen
        add(l0);
        add(bt0);
        add(bt1);
        add(bt2);

        jb0.addActionListener(this);
    }

    //this section listens to action on button jb0 and redirects to a new screen when its clicked.
	@Override
	public void actionPerformed(ActionEvent e) {
		if(e.getSource()==jb1){
			Login b = new Login();
			b.setVisible(true);
			this.setVisible(false);
		}
		
	}

}