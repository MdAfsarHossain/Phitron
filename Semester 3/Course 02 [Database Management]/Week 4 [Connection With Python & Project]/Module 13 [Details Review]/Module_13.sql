
-- Key
CREATE TABLE Enroll(
	roll INT,
    id INT,
    enrollDate DATE,
    PRIMARY KEY(roll, id),
    FOREIGN KEY(roll) REFERENCES Student(roll)
);

-- Rename
RENAME TABLE Student TO Person;
ALTER TABLE Student RENAME Person;

-- Alter Table
-- Column Add
ALTER TABLE Student
ADD email VARCHAR(50);

-- Column Delete
ALTER TABLE Student 
DROP COLUMN email;

-- Column MOdify
ALTER TABLE Student
MODIFY email VARCHAR(50);

-- Drop Table 
DROP TABLE IF EXISTS Student;

-- Truncate
TRUNCATE TABLE Student;


