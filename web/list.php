<link rel="stylesheet" href="reg.css">

<?php
    $mysql_servername = "localhost";
    $mysql_username = "root";
    $mysql_password = "";
    $mysql_database = "food_db";

    //create a connection
    $mysqli = new mysqli($mysql_host, $mysql_username, $mysql_password, $mysql_database);
    if ($mysqli->connection_error()){
        die('Error: ('.$mysqli->connect_errno.')'.$mysqli->connect_error);           
    }

    //sql
    $sql = "SELECT * FROM users";
    $result = $mysqli->query($sql);
    //print them out
    if($result->num_rows>0){
        echo "<table>";
        echo "<tr><th>ID</th> <th>Name</th> <th>Email</th></tr>";
        while($row = $result->fetch_assoc()){
            echo "<tr> <td>".$row['id']."</td> <td>".$row['uname']."</td> <td>".$row['uemail']."</td></tr>";
        }
    }else{
        echo "No records";
    }
?>