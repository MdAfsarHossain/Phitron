CREATE DATABASE assignment2;
use assignment2;

-- Question No: 1 
CREATE TABLE Customers(
	id INT,
    name VARCHAR(20)
);

SELECT * FROM Customers;

INSERT INTO Customers(id, name) 
VALUES(1, "Joe"), (2, "Henry"), (3, "Sam"), (4, "Max");

CREATE TABLE Orders(
	id INT,
    customerId INT
);

SELECT * FROM Orders;

INSERT INTO Orders(id, customerId)
VALUES(1, 3), (2, 1);

SELECT c.name as Customers
FROM Customers c
LEFT JOIN orders o 
ON c.id = o.customerId
WHERE o.customerId IS NULL;


-- Question No: 2
CREATE TABLE Person(
	id INT,
    email VARCHAR(20)
);

SELECT * FROM Person;

INSERT INTO Person(id, email)
VALUES(1, "john@example.com"),
	  (2, "bob@example.com"),
	  (3, "john@example.com");

-- Correct Query: 
SET SQL_SAFE_UPDATES = 0;
DELETE p1
FROM Person p1, Person p2
WHERE p1.email = p2.email AND p1.Id > p2.Id;
SET SQL_SAFE_UPDATES = 1;

SET SQL_SAFE_UPDATES = 0;
DELETE FROM Person
WHERE email IN(
	SELECT p2.email
    FROM Person p1, Person p2
    WHERE p1.email = p2.email AND p1.Id > p2.Id
);
SET SQL_SAFE_UPDATES = 1;


DELETE FROM Person
WHERE id NOT IN (SELECT MIN(id) FROM Person GROUP BY Email);


-- Question No: 4
CREATE TABLE Weather(
	id INT,
    recordDate DATE,
    temperature INT
);

SELECT * FROM Weather;

INSERT INTO Weather()
VALUES(1, "2015-01-01", 10),
	  (2, "2015-01-02", 25),
	  (3, "2015-01-03", 20),
	  (4, "2015-01-04", 30);
      
SELECT w1.id
FROM Weather w1, Weather w2
WHERE w1.temperature > w2.temperature
AND datediff(w1.recordDate, w2.recordDate)=1;


-- Question No: 4
use hr;
SELECT Salary
FROM Employees
ORDER BY Salary DESC
LIMIT 1 OFFSET 1;

SELECT MAX(SALARY)
FROM employees;



