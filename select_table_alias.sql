SELECT o.OrderID, o.OrderDate, c.CustomerName
FROM Customers AS c, Orders AS o
WHERE c.CustomerName='Around_the_Horn' AND c.CustomerID=o.CustomerID;
