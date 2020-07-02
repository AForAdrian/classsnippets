<link rel="stylesheet" href="reg.css">

<?php
    require_once('connect.php');

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