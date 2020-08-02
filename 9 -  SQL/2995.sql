select temperature,count(id) 
from records 
group by temperature,mark
order by mark;
