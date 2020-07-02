<html>
    <header>
        <h1>Deleting users</h1>
    </header>

    <!-- list users -->
    <?php
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

    <form method="POST" action="delete.php">
        <pre>
            <label for="gid">Enter user ID</label>
            <input type="text" name="gid" placeholder="1">

            <input class="btn" type="submit" value="DELETE">
        </pre>
    </form>


</html>