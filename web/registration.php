<html>
    <link rel="stylesheet" href="reg.css">

    <header>
        <h1>Register Here</h1>
    
    </header>

    <div class="card">
        <form method='POST' action="reg.php">
            <pre>
                <label for="uname">What is your name?</label>
                <input type="text" name="uname" placeholder="Donald Knuth">

                <label for="uemail">Mind leaving us your mail?</label>
                <input type="email" name="uemail" placeholder="don@knuth.abc">

                <label for="upin">Pick a pin</label>
                <input type="password" name="upin" placeholder="****">

                <input class="btn" type="submit" value="SUBMIT"/>
            </pre>
        </form>
    </div>
</html>