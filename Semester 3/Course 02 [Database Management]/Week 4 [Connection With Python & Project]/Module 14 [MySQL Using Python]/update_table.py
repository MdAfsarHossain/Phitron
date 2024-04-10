import mysql.connector

mydb = mysql.connector.connect(
    host = "localhost",
    user = "root",
    passwd = "afsar",
    database = "mydatabase"
)

mycursor = mydb.cursor()

# Update the database table
sql_command =   """
                    UPDATE Student
                    SET last_name = "Khan"
                    WHERE rool = 1
                """

mycursor.execute(sql_command)
mydb.commit()

