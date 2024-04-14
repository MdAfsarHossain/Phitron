CREATE DATABASE mid_xm;
show databases;

USE mid_xm;

CREATE TABLE employees(
	employee_id INT,
    first_name VARCHAR(30),
    last_name VARCHAR(30),
    email VARCHAR(50),
    phone_number CHAR(11),
    hire_date DATE,
	job_id INT,
    salary DECIMAL(10,2)
);

CREATE DATABASE mid_xm;
show databases;

USE mid_xm;

CREATE TABLE employees(
	employee_id INT PRIMARY KEY,
    first_name VARCHAR(30) NOT NULL,
    last_name VARCHAR(30) NOT NULL,
    email VARCHAR(50) NOT NULL UNIQUE,
    phone_number CHAR(11) NOT NULL UNIQUE,
    hire_date DATE DEFAULT(CURRENT_DATE()),
	job_id INT NOT NULL,
    salary DECIMAL(10,2) NOT NULL
);


ALTER TABLE employees ADD FOREIGN KEY (job_id) REFERENCES jobs(job_id);

DROP TABLE employees; 
SELECT * FROM employees;

-- ALTER TABLE employees
-- ADD salary DECIMAL(10,2);

USE hr;

SELECT * 
FROM employees;

SELECT first_name, salary
FROM employees
WHERE last_name="king";

SELECT first_name, last_name
FROM employees
WHERE salary > 2000;

SELECT AVG(salary)
FROM employees;

SELECT first_name, last_name, salary
FROM employees
GROUP BY salary
HAVING salary > (AVG(salary));

SElECT first_name,  salary
FROM employees
WHERE salary > (SELECT AVG(salary) FROM employees);

SELECT job_id, AVG(salary) as average_salary, MAX(salary) as max_salary
FROM employees
GROUP BY job_id;


SELECT *
FROM employees
ORDER BY salary ASC
LIMIT 6 OFFSET 4;

SELECT COUNT(*) as total_employees, SUM(salary) as salary
FROM employees;


