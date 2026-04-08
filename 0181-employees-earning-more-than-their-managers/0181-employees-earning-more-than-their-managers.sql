# Write your MySQL query statement below
select name as Employee from Employee as E
where E.salary > (select salary from Employee where Employee.id = E.managerId);