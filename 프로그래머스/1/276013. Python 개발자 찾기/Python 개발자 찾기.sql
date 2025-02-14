-- 코드를 작성해주세요
SELECT D.ID, D.EMAIL, D.FIRST_NAME, D.LAST_NAME
from DEVELOPER_INFOS D
where D.SKILL_1 = 'Python' or D.SKILL_2 = 'Python' or D.SKILL_3 = 'Python'
order by D.ID ASC