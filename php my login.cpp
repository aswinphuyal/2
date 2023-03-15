









connection
<?php
$servername="localhost";
$username="root";
$password="";
//Create Connection
$conn=new mysqli($servername,$username,$password);
//Check Connection
if($conn->connect_error)
{
	die("Connection failed".mysqli_connect_error());
}
Echo "Yes Connected";
?>





















<html>
<head>
<title>Login Form </title>
</head>
<body>
	<form name="Login" action ="login.php "method="POST"> 
		<center>
		<table align="center" bgcolor="grey"
			<tr>
			<td> Member Login </td>
		</tr>
            <td> Username </td> 
            <td><input type="text" name="username"></td>
            <tr>
			<td> Password </td>
			<td><input type="text" name="password"></td>
		   </tr>
			<td><input type="submit" value="Login"></td> 
			<td><input type="reset" value="forgot password"></td>

				</form>
			</center>
			</table>
			</body>

		</html>












<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname="computer";
//Create Connection
$conn = new mysqli($servername,$username,$password,$dbname);
//Check Connection
if($conn->connect_error)
{
die("Connection failed".mysqli_connect_error());
}
// Taking all values from the form data(input)

        $username =  $_REQUEST['username'];

        $password = $_REQUEST['password'];

//Insert Data
$sql = "INSERT INTO form2(username,password)
VALUES ('$username','$password')";
if($conn->query($sql)==TRUE)
{
	echo "Data stored in a database successfully!!!";
}
else
{
	echo "Error!!!;".$conn->error;
}
$conn->close();
?>






















php.largest
<html>
<head>
<h2>Largest</h2>
</head>
<body>
<?php
$a=10;
$b=20;
$c=5;
if($a>$b&&$c<$a)
	echo("Largest=$a");
else if($b>$a&&$b>$c)
	echo("Largest=$b");
else
	echo("Largest=$c");
?>
</body>
</html>


























 Form Validation
 <html> 
 <head>
 <script type="text/javascript"> 
 function validate()  {
 if(document.myForm.Name.value== "") {
 alert( "Please provide your name !" ); 
 document.myForm.Name.focus();
 return false; 
 }	
 if(document.myForm.EMail.value== "" ) {
 alert( "Please provide your Email!" ); 
 document.myForm.Email.focus(); 
 return false; 
 }
 if(document.myForm.Zip.value== "" || isNaN(document.myForm.Zip.value) || 
 document.myForm.Zip.value.length!=5) 
	{
	alert ("Enter zip in the format #####" ); 
	document.myForm.Zip.focus();
	return false;
	}
if(document.myForm.Country.value == "-1" ) {
	alert( "Please provide your country!" ); 
	return false;
	}
	return(true);
	}
	</script> 
	</head> 
	<body> 
	<form name="myForm" onsubmit="return validate()">
  Name: <input type="text" name="Name"> <br>
  Email: <input type="email" name="EMail"> <br>
  Zip code: <input type="text" name= "Zip"> <br>
  Country: <select name="Country"> <br>
	<option value="-1" selected>Choose Country </option>  
   <option value="1">USA</option> 
	<option value="2">UK</option> 
	<option value="3">Nepal</option> 
	</select> <br>
	 <input type ="submit" value="Submit">
	</form>
	</body>
	</html>










Fibonacci
<html>
<head>
	<h2>Fibonacci Series</h2>
	</head>
	<body>
<script type="text/javascript">
var a=0,b=1,c;
while(a<20)
{
	document.write("<br>"   +a);
	c=a+b;
	a=b;
	b=c;
}
</script>
</body>
</html>









object
<html>
<body>
<h2>OOP object</h2>
<script type="text/javascript">
var car={
	make:"Bugati",
	model:"Bugati Chiron",
	year:2022,
	number:"BA 20 PA 2022"};
	document.write(car.make+"__"+car.model+"__"+car.year+"__"+car.number);
	</script>
	</body>
	</html>











operations
<html>
<head>
<title>example of operators</title>
<h1>Operators</h1>
<script type="text/javascript">
var a=25;
var b=10;
var result;
document.write("a=25 <BR> b=10");
result=a+b;
document.write("<BR> a+b="+result);
result=a-b;
document.write("<BR> a-b="+result);
result=a*b;
document.write("<BR> a*b="+result);
result=a/b;
document.write("<BR> a/b="+result);
result=a%b;
document.write("<BR> a%b="+result);
a++;
document.write("<BR> eg of a++"+a);
b--;
document.write("<BR> eg of b--"+b);
</script>
</body>
</html>













si
<html>
<head>
<script type="text/javascript">
function si(p,t,r)
{
	return (p*t*r)/100;
}
</script>
</head>
<script type="text/javascript">
var a=si(1000,2,5);
document.write("<br>Principle=1000<br>Time=2<br>Rate=5");
document.write("<br>SI="+a);
</script>
</body>
</html>













multiplication table
<html>
<head>
<h2>Multiplication Table</h2>
</head>
<body>
<script type="text/javascript">
var a=parseInt(prompt("Enter a number"));
var b, i=0;
for(i=1;i<=10;i++)
{
b=a*i;
document.write("<br>" +b);
}
</script>
</body>
</html>












sum
<html>
<head>
<title> Sum of two numbers </title>
</head>
<body>
<script type= "text/javascript">
var a=5;
var b=5;
var c=a+b;
document.write("Sum of two nnumbers is:" +c);
</script>
</body>
</html>
















php
<html>
<body>
<h1>My first PHP page</h2>
<?php
echo"Hello world!";
?>
</body>
</html>



