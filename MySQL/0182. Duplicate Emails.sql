-- Date: Feb. 23, 2023

SELECT email
FROM Person
GROUP BY email
HAVING COUNT(email) > 1;