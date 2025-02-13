SELECT o.USER_ID, o.PRODUCT_ID
from ONLINE_SALE o
Group by o.USER_ID, o.PRODUCT_ID
having count(*) > 1
order by o.USER_ID, o.PRODUCT_ID DESC