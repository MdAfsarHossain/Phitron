import mysql.connector

mydb = mysql.connector.connect(
    host = "localhost",
    user = "root",
    passwd = "afsar",
    database = "mydatabase"
)


mycursor = mydb.cursor()

# Create a table
sql_command =   """
                    CREATE TABLE Student (
                        rool INT,
                        first_name VARCHAR(20),
                        last_name VARCHAR(20)
                    );
                """

mycursor.execute(sql_command)


