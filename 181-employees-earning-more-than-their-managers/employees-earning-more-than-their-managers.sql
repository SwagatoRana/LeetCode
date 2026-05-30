# Write your MySQL query statement below
select S1.name as Employee from Employee S1 inner join Employee S2 on S1.managerId = S2.id where S1.salary > S2.salary;