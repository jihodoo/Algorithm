-- 코드를 입력하세요
SELECT count(U.USER_ID)
from USER_INFO U
where U.AGE between 20 and 29 
and YEAR(U.JOINED) = 2021