<?php
    require_once('connect.php');

    if($_SERVER['request_method'] == 'POST'){
        try{
            $gid = 1; //get id from slug
            $nuname = filter_var($_POST['nuname'],FILTER_SANITIZE_STRING);
            $nuemail = filter_var($_POST['nuemail'], FILTER_SANITIZE_EMAIL);
            $nupin = filter_var($_POST['nupin'], FILTER_SANITIZE_STRING);
    
    
            // update sql
            $sql = "UPDATE users SET uname=$nuname, email=$nemail, upin = $nupin WHERE id=$gid";
            $statement = $mysqli->prepare($sql);
            $statement->execute();
    
            echo "Updated successfully";
        }catch(Exception $e){
            echo $sql.$e->getMessage();
        }
    }
?>