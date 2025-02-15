-- 코드를 작성해주세요
select count(*) as FISH_COUNT
from FISH_INFO F
join FISH_NAME_INFO N on F.FISH_TYPE = N.FISH_TYPE
where N.FISH_NAME = 'BASS' or N.FISH_NAME = 'SNAPPER'