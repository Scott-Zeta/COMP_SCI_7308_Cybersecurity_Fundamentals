<html><body>
<?php
session_start();

// Logging in
if (isset ( $_POST['login'])) {
    $conn = new mysqli("localhost", "dbuser", "password123", "workshop8");
    $username = $_POST['username'];
    $password = $_POST['password'];
    $sql = "SELECT id, name, grade from students where name='" . $username . "' and password='" . sha1($password) . "';";
    if($res = $conn->query($sql)) {
        if ($res->num_rows > 0) {
            $row = $res->fetch_assoc();
            $_SESSION['id'] = $row['id'];
            $_SESSION['name'] = $row['name'];
            $_SESSION['grade'] = $row['grade'];
        }
        else {
            echo "Wrong name or password";
        }
    }
}
// Logging out
if (isset ( $_POST['logout'])) {
    $_SESSION['id'] = NULL;
    session_destroy();
}


// If the user is logged in, show stuff + logout button
if ( isset( $_SESSION['id'] ) ) {
?>

<h1>Welcome <?php echo $_SESSION['name'] ?>!</h1>
Your current grade is: <?php echo $_SESSION['grade'] ?>
<form method="post">
<input type="submit" name="logout" value="logout">
</form>

<?php
// If not logged in, then show login form instead
} else {
?>

<h1>Please login!</h1>
<form method="post">
    <input type="text" name="username" placeholder="Enter your username" required>
    <input type="password" name="password" placeholder="Enter your password" required>
    <input type="submit" name="login" value="login">
</form>

<?php
}
?>
</body></html>