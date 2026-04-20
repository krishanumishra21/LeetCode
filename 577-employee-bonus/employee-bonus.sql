select Employee.name,Bonus.Bonus
from Employee 
left join bonus
on Employee.empId = Bonus.empId
WHERE Bonus.bonus < 1000 OR Bonus.bonus IS NULL;