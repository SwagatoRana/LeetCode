# Write your MySQL query statement below
select W1.id from Weather W1 where W1.temperature > (select temperature from Weather W2 where W2.recordDate = date_sub(W1.recordDate, interval 1 day));
-- select W1.id as Id from Weather W1 join Weather W2 on W1.recordDate = (W2.recordDate + 1) and W1.temperature > W2.temperature;