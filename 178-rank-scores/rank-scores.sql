# Write your MySQL query statement below
select S1.score, (select count(distinct S2.score) from Scores S2 where S2.score > S1.score) + 1 as `rank` from Scores S1 order by `rank`;