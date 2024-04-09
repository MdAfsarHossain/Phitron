SELECT UPPER("This is a pen");
SELECT LOWER("THIS IS A PEN");

SELECT COS(0);
SELECT COS(PI());
SELECT RADIANS(90);

SELECT LOG(2);
SELECT LN(2);
SELECT LOG2(2);
SELECT LOG10(10);
SELECT SQRT(100);

SELECT MAX(salary)
FROM employees;

SELECT MIN(salary)
FROM employees;

SELECT SUM(salary)
FROM employees;

SELECT AVG(salary)
FROM employees;

SELECT COUNT(salary)
FROM employees;

SELECT job_id, COUNT(*)
FROM employees
GROUP BY job_id;

SELECT job_id, MAX(salary)
FROM employees
GROUP BY job_id;

SELECT job_id, MIN(salary)
FROM employees
GROUP BY job_id;

SELECT job_id, AVG(salary)
FROM employees
GROUP BY job_id;

SELECT job_id, MAX(salary) 
FROM employees
GROUP BY job_id;


SELECT last_name
FROM employees
GROUP BY last_name;

SELECT job_id, COUNT(*)
FROM employees
GROUP BY job_id
HAVING COUNT(*) > 1;

SELECT job_id, COUNT(*)
FROM employees
GROUP BY job_id
HAVING MIN(salary) > 20000;

ALTER TABLE table_name
ADD phone_no CHAR(11);



