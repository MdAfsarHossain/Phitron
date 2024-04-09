use hr;

-- Union
SELECT emp_id, name
FROM branch1
UNION
SELECT emp_id, name
FROM branch2;

-- Union All
SELECT emp_id, name
FROM branch1
UNION ALL
SELECT emp_id, name
FROM branch2;

-- Minus
-- SELECT emp_id, name
-- FROM branch1
-- MINUS
-- SELECT emp_id, name
-- FROM bracnch2;

CREATE DATABASE onDeleteCasCade;
use ondeletecascade;

CREATE TABLE Student(
	sno INT PRIMARY KEY,
    sname VARCHAR(20),
	age INT
);

INSERT INTO Student(sno, sname, age)
VALUES(1, 'Ankit', 17),(2, 'Ramya', 18),(3, 'Ram', 16);

SELECT * FROM Student;

CREATE TABLE Course(
	cno INT PRIMARY KEY,
    cname VARCHAR(20)
);

INSERT INTO Course(cno, cname) 
VALUES(101, 'C'), (102, 'C++'), (103, 'DBMS');

SELECT * FROM Course;

CREATE TABLE Enroll(
	sno INT,
    cno INT,
    jdate date,
    PRIMARY KEY(sno, cno),
    FOREIGN KEY(sno)
		REFERENCES Student(sno)
        ON DELETE CASCADE,
	FOREIGN KEY(cno)
		REFERENCES Course(cno)
        ON DELETE CASCADE
);

INSERT INTO Enroll(sno, cno, jdate)
VALUES(1, 101, '21-01-06'),(2, 102, '21-02-05'),(1, 103, '21-02-05');

SELECT * FROM Enroll;

SET SQL_SAFE_UPDATES = 0;
DELETE FROM Student WHERE sname="Ramya";
SET SQL_SAFE_UPDATES = 1;

SELECT * FROM Student;
SELECT * FROM Enroll;


-- Trigger
-- CREATE TRIGGER tr_cap
-- BEFORE INSERT ON Employee
-- FOR EACH Row
-- SET New.name = UPPER(New.name);
--                LOWER(New.name);  


