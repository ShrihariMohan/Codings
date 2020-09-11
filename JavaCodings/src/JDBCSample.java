import java.sql.* ;

import static java.lang.Class.forName;

interface test {
     static void testMethods() {
          System.out.println("HELlo");
     }
}
public class JDBCSample {
    public static void main(String[] args) throws Exception {

         String url = "jdbc:mysql://localhost:3306/Registration";
         String root = "root";
         String password = "password";
         String query = "select * from user;";

         forName("com.mysql.jdbc.Driver"); // Setting up drivers
         Connection con = DriverManager.getConnection(url , root , password) ; // Connection Establish
         Statement st = con.createStatement() ; // Statements
         ResultSet res = st.executeQuery(query); // Execution statments
         res.next();
         String userData = res.getString(2) +" : " +
                 res.getString(1)  + " : " +
                 res.getString(3); // ResultSet to store data.
         System.out.println(userData);
         st.close();
         con.close();

    }
}
