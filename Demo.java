package demo;
import java.sql.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.util.logging.Level;
import java.util.logging.Logger;


public class Demo {
    

    public static void main(String[] args) {
        double radius;
        circle mycircle = new circle();
         
        try {
            
            try {
                Class.forName("com.mysql.jdbc.Driver");
                Connection con = null;
                con = DriverManager.getConnection("jdbc:mysql://localhost:3306/demo","root","");
                Statement stmt = con.createStatement();
                ResultSet rs = stmt.executeQuery("SELECT radius FROM circle where id="+20);
                while(rs.next()){
//                    System.out.println(rs.getDouble(1));
                    mycircle.setRadius( rs.getDouble(1));
                }
                con.close();;
            } catch (ClassNotFoundException ex) {
                Logger.getLogger(Demo.class.getName()).log(Level.SEVERE, null, ex);
            }            
        } catch (SQLException ex) {
            Logger.getLogger(Demo.class.getName()).log(Level.SEVERE, null, ex);
           
        }
        System.out.println(mycircle);  
        
    }
    
}
