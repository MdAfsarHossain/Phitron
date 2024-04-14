CREATE DATABASE Final_xm;

USE final_xm;

CREATE TABLE User(
	Username VARCHAR(50),
    Email VARCHAR(50),
    FirstName VARCHAR(20),
    LastName VARCHAR(20),
    PhoneNo CHAR(11),
    Address VARCHAR(40),
    HSCResult FLOAT(4),
    DateOfBirth DATE,
    Age INT,
    password VARCHAR(30)
);

SELECT * FROM User;
DROP TABLE User;

CREATE TABLE User(
	Username VARCHAR(50) PRIMARY KEY NOT NULL,
    Email VARCHAR(50) UNIQUE NOT NULL,
    FirstName VARCHAR(20) NOT NULL,
    LastName VARCHAR(20) NOT NULL,
    PhoneNo CHAR(11) UNIQUE NOT NULL,
    Address VARCHAR(40) NOT NULL,
    HSCResult FLOAT(4) NOT NULL,
    DateOfBirth DATE,
    Age INT NOT NULL,
    password VARCHAR(30) NOT NULL
);

USE hr;

-- 6 NO:
SELECT *
FROM employees
WHERE last_name LIKE "k%"
OR last_name LIKE "%k";


-- 7 NO:
SELECT *
FROM employees e1
INNER JOIN employees e2
ON e1.manager_id = e2.employee_id
WHERE e1.salary>e2.salary;

SELECT *
FROM employees;

-- 8 NO:
-- From HR Database, print all the employee names along with department name
SELECT * FROM Employees;
SELECT * FROM departments;

SELECT e.first_name, e.last_name, e.department_id, d.department_id, d.department_name
FROM employees e INNER JOIN departments d
USING (department_id)
WHERE e.department_id=d.department_id;

SELECT e.first_name, e.last_name, d.department_name
FROM employees e INNER JOIN departments d
USING (department_id)
WHERE e.department_id=d.department_id;



