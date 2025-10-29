select e2.unique_id , e.name from Employees as e

left join EmployeeUNI as e2

on e2.id = e.id 