select s.user_id, s.product_id
from online_sale s
group by s.user_id, s.product_id
having count(*) > 1
order by s.user_id asc, s.product_id desc