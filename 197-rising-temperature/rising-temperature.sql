# Write your MySQL query statement below
SELECT i.id
from Weather i
join Weather t
on DATEDIFF(i.recordDate,t.recordDate)=1
where i.temperature>t.temperature;
