<html>
<link rel="stylesheet" href="reg.css">

    <header>
        <h1>Users</h1>
    </header>

    <table>
    
        <thead>
            <tr>
                <th>ID</th>
                <th>NAME</th>
                <th>EMAIL</th>
            </tr>
        </thead>
        <tbody>
            <?php
                require_once('connect.php');

                if(isset($_GET['page_no']) && $_GET['page_no']!=0){
                    $page_no = $_GET['page_no'];
                }else{
                    $page_no = 1;
                }
                $records_per_page = 10;
                $offest = ($page_no-1) * $records_per_page;
                $previous_page = $page_no -1;
                $next_page = $page_no + 1;
                $adjacents = 2;

                $total_records = $mysqli->querry("SELECT COUNT(*) AS total_records FROM users");
                $total_records = $total_records['total_records'];
                $num_pages = ceil($total_records/$records_per_page);

                //sql
                $sql = "SELECT * FROM users LIMIT $offest, $records_per_page";
                $result = $mysqli->query($sql);
                //print them out
                if($result->num_rows>0){
                    while($row = $result->fetch_assoc()){
                        echo "<tr> <td>".$row['id']."</td> <td>".$row['uname']."</td> <td>".$row['uemail']."</td></tr>";
                    }
                }else{
                    echo "No records";
                }
            ?>
        </tbody>
    </table>

    <div style='padding: 10px 20px 0px; border-top: dotted 1px #CCC;'>
        <strong>Page <?php echo $page_no." of ".$num_pages; ?></strong>
    </div>


</html>
