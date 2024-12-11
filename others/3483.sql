-- link: https://judge.beecrowd.com/pt/problems/view/3483

(
    select city_name, population from cities 
        order by population desc limit 1 offset 1
)
union
(
    select city_name, population from cities 
        order by population asc limit 1 offset 1
) order by city_name desc
