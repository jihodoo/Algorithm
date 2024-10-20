SELECT ROUND(avg(daily_fee)) as AVERAGE_FEE
from car_rental_company_car C
where C.car_type = 'SUV'
