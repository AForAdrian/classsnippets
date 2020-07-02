<?php
    require_once('connect.php');

    if($_SERVER['request_method'] == 'POST'){
        try{
            $gid = filter_var($_POST['gid'],FILTER_SANITIZE_NUMBER_INT); //get id from deletion form   
    
            // delete sql
            $sql = "DELETE FROM users WHERE id=$gid";
            $statement = $mysqli->prepare($sql);
            $statement->execute();
    
            echo "Deleted successfully";

        }catch(Exception $e){
            echo $sql.$e->getMessage();
        }
    }
?>