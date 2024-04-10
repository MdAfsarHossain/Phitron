import mysql.connector

mydb = mysql.connector.connect(
    host = "localhost",
    user = "root",
    passwd = "afsar",
    database = "mydatabase"
)

mycursor = mydb.cursor()

#Insert into database table
sql_command =   """
                    INSERT INTO Student(rool, first_name, last_name)
                    VALUES(1, "Afsar", "Hossain"), (2, "Tarek", "Hossain");
                """

mycursor.execute(sql_command)
mydb.commit()
