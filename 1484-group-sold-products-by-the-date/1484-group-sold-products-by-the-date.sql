select sell_date,count(distinct(product)) as num_sold, GROUP_CONCAT(distinct product order by product asc) as products
from Activities
group by sell_date
