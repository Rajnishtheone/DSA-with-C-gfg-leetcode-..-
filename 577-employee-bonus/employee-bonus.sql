# Write your MySQL query statement below
Select e.name , b.bonus
From Employee as e
Left Join Bonus as b
On e.empId = b.empId
Where b.bonus < 1000 or b.bonus is null;