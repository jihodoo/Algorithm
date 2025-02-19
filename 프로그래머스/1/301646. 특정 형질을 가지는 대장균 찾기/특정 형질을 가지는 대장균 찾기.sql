-- 코드를 작성해주세요
select count(*) as COUNT
from ECOLI_DATA E
where (E.GENOTYPE & 2 = 0) 
AND (E.GENOTYPE & 1 != 0 or E.GENOTYPE & 4 != 0)