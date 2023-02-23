-- Date: Feb. 23, 2023

SELECT firstName, lastName, city, state
FROM Person
LEFT JOIN Address
ON Person.personId = Address.personId;