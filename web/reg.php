<?php
    require_once('connect.php');

    if($_SERVER['request_method'] == 'POST'){
        //get post data
        $uname = filter_var($_POST['uname'],FILTER_SANITIZE_STRING);
        $uemail = filter_var($_POST['uemail'], FILTER_SANITIZE_EMAIL);
        $upin = filter_var($_POST['upin'], FILTER_SANITIZE_STRING);
        
        //prep sql statement
        $statement = $mysqli->prepare("INSERT INTO users (uname, uemail, upin) VALUES(?,?,?)");
        $statement->bind_param('sss', $uname, $uemail, $upin);
        //insert querry
        if($statement->execute()){
            print 'User Registered Successfully!';
            header('Location: localhost:8000/user_list.php');
        }
        else{
            print $mysqli->error;
        }
    }
?>