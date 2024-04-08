CREATE DATABASE InsertTable;

USE InsertTable;

CREATE TABLE Student(
	Roll INT,
    Name VARCHAR(30),
    Contact_No CHAR(11),
    Email VARCHAR(30)
);

INSERT INTO Student(Roll, Name, Contact_no, Email) VALUES(101, "Afsar", "01991785857", "afsar291722@gmail.com");
INSERT INTO Student(Roll, Name, Contact_no, Email) VALUES(105, "Tarek", "01991425445", "tarek@gmail.com");
INSERT INTO Student(Roll, Name, Contact_no, Email) VALUES(109, "Afsar", "01914875265", "afsar22@gmail.com");

SELECT * FROM Student;

SET SQL_SAFE_UPDATES = 0;
UPDATE Student SET Name="Md. Afsar" WHERE Roll=101;
SET SQL_SAFE_UPDATES = 1;

SET SQL_SAFE_UPDATES=0;
DELETE FROM student
WHERE roll=109;
SET SQL_SAFE_UPDATES=1;

SELECT email
FROM student
WHERE roll=105;
