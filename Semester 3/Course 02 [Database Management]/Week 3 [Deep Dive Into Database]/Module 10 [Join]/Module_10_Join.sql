use hr;

SELECT s.roll, s.name, r.grede
FROM student s, result r
WHERE s.roll = r.roll;


-- Employee id, Employee first_name, Dept_name
-- Without using join keyword
SELECT employee_id, first_name, department_name
FROM employees e, departments d
WHERE e.department_id=d.department_id;

-- Using Join keyword
SELECT employee_id, first_name, department_name
FROM employees JOIN departments USING (department_id);

-- Using ON Keyword
SELECT employee_id, first_name, department_name
FROM employees e JOIN departments d ON (e.department_id=d.department_id);

-- SELF JOIN
SELECT e1.first_name, e2.first_name
FROM employees e1 JOIN employees e2
ON (e1.manager_id=e2.employee_id);

-- SELECT order_id, customer_name
-- FROM order
-- INNER customer
-- ON (order.customer_id=customer.customer_id);

-- SELECT order_id, customer_name
-- FROM order
-- LEFT customer
-- ON (order.customer_id=customer.customer_id);

-- SELECT order_id, customer_name
-- FROM order
-- ROGHT customer
-- ON (order.customer_id=customer.customer_id);


-- SELECT order_id, customer_name
-- FROM order
-- FULL customer
-- ON (order.customer_id=customer.customer_id);


