use hr;

TRUNCATE TABLE table_name;

SELECT * FROM employees;

SELECT first_name, salary FROM employees WHERE salary > 
(SELECT salary FROM employees WHERE employee_id=101);

-- Who get salary less than Diana
SELECT first_name, salary
FROM employees
WHERE first_name='Diana';

 SELECT first_name, salary
 FROM employees
 WHERE salary <
 (SELECT salary FROM employees WHERE first_name='Diana');
 
 SELECT first_name, salary
 FROM employees
 WHERE salary !=
 (SELECT salary FROM employees WHERE first_name='Diana');
 
 
 -- Show employee name who work with Diana and their salary is more than Daniel
 SELECT job_id, first_name, salary
 FROM employees 
 WHERE job_id=(SELECT job_id FROM employees WHERE first_name='Diana') AND salary>(SELECT salary FROM employees WHERE first_name='Daniel');
 
 SELECT employee_id, first_name
 FROM employees
 WHERE first_name = 'Diana'
 LIMIT 1;
 
 
 -- Employee records (Working in other than IT_PROG department) Whose SALARY is less than at least one employee of IT_PROG
 SELECT first_name, salary
 FROM employees
 WHERE job_id != "IT_PROG" AND
 salary < ANY (SELECT SALARY FROM employees WHERE job_id='IT_PROG');
 
 
 -- Those employees whose salary is higher than at least 
 -- Three other employees.
 
 SELECT *
 FROM employees e1
 WHERE 3<= (SELECT COUNT(*) FROM employees e2 WHERE e2.salary<e1.salary);
 
 -- uses NOT EXISTS to find those employees whose earns the 
 -- maximum salary in his/her department
 
 SELECT last_name, salary, department_id
 FROM employees e1
 WHERE NOT EXISTS
 (SELECT * 
 FROM employees e2 WHERE e2.department_id=e1.department_id 
 AND e2.salary>e1.salary);
 
 