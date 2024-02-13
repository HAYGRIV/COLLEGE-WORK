import java.sql.*;

public class DatabaseExample {
    public static void main(String[] args) {
        // JDBC URL, username, and password of MySQL server
        String url = "jdbc:mysql://your_database_url:3306/your_database";
        String user = "your_username";
        String password = "your_password";

        try {
            // Establishing a connection
            Connection connection = DriverManager.getConnection(url, user, password);

            // Storing values
            Statement statement = connection.createStatement();
            statement.executeUpdate("INSERT INTO your_table (column1, column2) VALUES ('value1', 'value2')");

            // Fetching values
            ResultSet resultSet = statement.executeQuery("SELECT * FROM your_table");
            while (resultSet.next()) {
                String column1Value = resultSet.getString("column1");
                String column2Value = resultSet.getString("column2");
                System.out.println("Retrieved from Database: " + column1Value + ", " + column2Value);
            }

            // Closing resources
            resultSet.close();
            statement.close();
            connection.close();

        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}
