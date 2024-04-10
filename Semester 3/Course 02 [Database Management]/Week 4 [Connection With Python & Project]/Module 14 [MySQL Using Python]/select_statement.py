import mysql.connector

mydb = mysql.connector.connect(
    host = "localhost",
    user = "root",
    passwd = "afsar",
    database = "mydatabase"
)

mycursor = mydb.cursor()

#Select 
sql_command =   """
                    SELECT *
                    FROM student;
                """

mycursor.execute(sql_command)
data = mycursor.fetchall()

for i in data:
    print(i)
    

