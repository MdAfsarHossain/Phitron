USE hr;

SELECT * FROM countries;
SELECT country_name FROM countries;
SELECT region_id FROM countries;
SELECT DISTINCT region_id FROM countries;  /* Distinct means unique. It doesn't repeat any number. */

SELECT *
FROM departments;

SELECT *
FROM departments
ORDER BY location_id ASC;  /* Small to Large*/

SELECT *
FROM departments
ORDER BY location_id DESC; /* Large to Small*/

SELECT * 
FROM employees
LIMIT 5;

SELECT *
FROM employees
LIMIT 5 OFFSET 10;

SELECT 3+5;
SELECT 3-5;
SELECT 3*5;
SELECT 3/5;
SELECT 3%5;

SELECT first_name, salary
FROM employees
WHERE salary < 9000;

SELECT first_name, salary
FROM employees
WHERE salary BETWEEN 9000 AND 15000;

SELECT *
FROM employees
WHERE salary >20000 OR last_name="Austin";

SELECT *
FROM employees
WHERE job_id IN ("AC_ACCOUNT", "AD_ASST");

SELECT *
FROM employees
WHERE job_id NOT IN ("AC_ACCOUNT", "AD_ASST");

SELECT first_name
FROM employees
WHERE first_name LIKE "a%";

SELECT first_name
FROM employees
WHERE first_name LIKE "%a";


SELECT first_name
FROM employees
WHERE first_name LIKE "%na%";

SELECT first_name AS FirstName
FROM employees;



