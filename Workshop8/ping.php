<html><body>
<h1>Welcome to the Ping Server</h1>

<form method="post">
IP: <input type="text" name="ip">
<input type="submit" name="ping">
</form>

<!--if there is a POST request (ie. user has submitted something, then process the request -->
<?php 
    if( isset($_POST['ping']) ) {   
    $ip = $_POST['ip'];   
    $cmd = shell_exec('ping -c 4 '.$ip);    
    print("<pre>{$cmd}</pre>"); 
    }
?>
</body></html>​