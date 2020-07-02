<html>
    <link rel="stylesheet" href="reg.css">
    <header>
        <h1>Enter the updated values!</h1>
    </header>

    <div class="card">
        <form method='POST' action="update.php">
            <pre>
                <label for="nuname">What is your name?</label>
                <input type="text" name="nuname" placeholder="Donald Knuth">

                <label for="nuemail">Mind leaving us your mail?</label>
                <input type="email" name="nuemail" placeholder="don@knuth.abc">

                <label for="nupin">Pick a pin</label>
                <input type="password" name="nupin" placeholder="****">

                <input class="btn" type="submit" value="UPDATE"/>
            </pre>
        </form>
    </div>

</html>