# Write your MySQL query statement below
select E.name, B.bonus from Employee E left join Bonus B on E.empId = B.empId where E.empId not in (select empId from Bonus) or B.bonus < 1000;