-- Goal: Query a single table
USE classicmodels;

-- Select staement
SELECT * FROM classicmodels.customers;

SELECT *
FROM employees;

SELECT *
FROM employees
WHERE officeCode=1
ORDER BY firstName;

-- Select only a few columns
SELECT firstName, lastName
FROM employees
WHERE officeCode=1
ORDER BY firstName;

-- change the order of columns
SELECT 
	lastName, 
    firstName, 
    email
FROM employees;

-- Select from products
SELECT  productCode,
		productName,
        buyPrice,
        MSRP AS "Selling Price"
FROM products;

SELECT  productCode,
		productName,
        buyPrice,
        MSRP AS "Selling Price",
		(MSRP * 0.9) AS "Selling Price"
FROM products;

-- 
SELECT *
FROM orders
WHERE status != "Shipped";

-- Filter out Payments where amount >= 40000
SELECT *
FROM payments
WHERE amount >= 40000;

-- Logical Operators: AND, OR, NOT 
SELECT *
FROM payments
WHERE amount >= 40000 AND amount <= 60000;

SELECT *
FROM payments
WHERE NOT (amount >= 40000 AND amount <= 60000);

-- Query: Payment >= 2005-05-25
SELECT *
FROM payments
WHERE (amount >= 40000 AND amount <= 60000)
		AND paymentDate >= '2005-05-25';
        
-- IN Operator

SELECT *
FROM employees
WHERE officeCode=1 OR officeCode=2 OR officeCode=4;

SELECT *
FROM employees
WHERE officeCode IN (1, 2, 4)
ORDER BY officeCode;

SELECT *
FROM employees
WHERE officeCode NOT IN (1, 2, 4)
ORDER BY officeCode;

-- ----------------
-- BETWEEN Operator
-- ----------------
SELECT * 
FROM customers
WHERE creditLimit >= 20000 AND creditLimit <= 40000;

SELECT * 
FROM customers
WHERE creditLimit BETWEEN 20000 AND 40000;

SELECT *
FROM payments
WHERE paymentDate BETWEEN '2003-05-31' AND '2004-05-31';

-- ----------------
-- LIKE Operator
-- ----------------

SELECT *
FROM employees
WHERE jobTitle LIKE "%Sale%"; -- % matches any number of characters

SELECT *
FROM employees
WHERE jobTitle LIKE "Sale%"; 

SELECT *
FROM employees
WHERE firstName LIKE "%y"; -- first name should end in y

SELECT *
FROM employees
WHERE firstName LIKE "_y"; -- first name should be of length 2 and the last character is y

SELECT *
FROM employees
WHERE firstName LIKE "____y"; -- first name should be of length 5 and the last character is y

-- ----------------
-- REGEXP Operator
-- ----------------

SELECT *
FROM employees
WHERE jobTitle REGEXP "sale"; -- job titles which contain "sale" anywhere inside them

SELECT *
FROM employees
WHERE jobTitle REGEXP "^sale"; -- job titles which start with "sale"

SELECT *
FROM employees
WHERE jobTitle REGEXP "rep$"; -- job titles which end with "rep"

SELECT *
FROM employees
WHERE firstName REGEXP "^a|^b"; -- first name begins with a or b

SELECT *
FROM employees
WHERE firstName REGEXP "^[a-f]"; -- first name begins with a or b or ..f

SELECT *
FROM employees
WHERE firstName REGEXP "^[a-h]|lie$"; -- first name begins with a-h or it ends with lie

SELECT *
FROM customers
WHERE phone REGEXP "55$"; -- phone number ends with 55

-- ----------------
-- IS NULL Operator
-- ----------------

SELECT *
FROM orders
WHERE comments IS NULL;

SELECT *
FROM orders
WHERE shippedDate IS NULL;

SELECT *
FROM orders
WHERE shippedDate IS NOT NULL;

SELECT *
FROM customers
WHERE state IS NOT NULL;

-- ----------------
-- ORDER BY Clause
-- ----------------
SELECT *
FROM customers
ORDER BY city;

SELECT *
FROM customers
ORDER BY city DESC;

SELECT  customerNumber,
		contactLastName,
        contactFirstName
FROM customers
ORDER BY city DESC;

SELECT  customerNumber,
		contactLastName,
        contactFirstName,
        city
FROM customers
ORDER BY city DESC;

SELECT  customerNumber,
		contactLastName,
        contactFirstName,
        city
FROM customers
ORDER BY city DESC, contactLastName; -- sort first based on city and then based on contactLastName

-- ----------------
-- LIMIT Clause
-- ----------------
SELECT *
FROM customers
LIMIT 10; -- only first 10 records

SELECT *
FROM customers
LIMIT 10, 20; -- skip the first 10 records and give me the next 20 records

SELECT *
FROM customers
LIMIT 20, 10; -- skip the first 20 records and give me the next 10 records

-- Top 5 customers with highest credit limit
SELECT *
FROM customers
ORDER BY creditLimit DESC
LIMIT 5;

-- ----------------
-- Inner Join
-- ----------------

SELECT *
FROM payments
JOIN customers -- INNER JOIN (or) JOIN both are the same
	ON payments.customerNumber = customers.customerNumber;
    
SELECT  payments.customerNumber,
		paymentDate,
        amount,
        customerName
FROM payments
JOIN customers
	ON payments.customerNumber = customers.customerNumber;
    
-- alias to table names
SELECT  p.customerNumber,
		paymentDate,
        amount,
        customerName
FROM payments p
JOIN customers c
	ON p.customerNumber = c.customerNumber;
    
-- -----------------------
-- Joining Multiple Tables
-- -----------------------
SELECT *
FROM orders o
JOIN customers c
	ON o.customerNumber = c.customerNumber;
    
SELECT  orderNumber,
		status,
        o.customerNumber,
        c.customerName,
        c.salesRepEmployeeNumber
FROM orders o
JOIN customers c
	ON o.customerNumber = c.customerNumber;
    
SELECT  orderNumber,
		status,
        o.customerNumber,
        c.customerName,
        e.firstName,
        e.jobTitle
FROM orders o
JOIN customers c
	ON o.customerNumber = c.customerNumber
JOIN employees e
	ON c.salesRepEmployeeNumber = e.employeeNumber;
    
-- ----------------
-- Self Join
-- ----------------
SELECT *
FROM employees emp
JOIN employees mgr
	ON emp.reportsTo = mgr.employeeNumber;

SELECT  emp.employeeNumber, 
		emp.firstName, 
        emp.jobTitle, 
        mgr.firstName AS "Manager Name", 
        mgr.jobTitle AS "Manager Job Title"
FROM employees emp
JOIN employees mgr
	ON emp.reportsTo = mgr.employeeNumber;
    
-- --------------------
-- Implicit Join Syntax (we don't use the JOIN keyword explicitly)
-- --------------------
SELECT  p.customerNumber,
		paymentDate,
        amount,
        customerName
FROM payments p, customers c
WHERE p.customerNumber = c.customerNumber;

-- --------------------
-- Outer Join
-- --------------------
