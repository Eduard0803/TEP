-- link: https://www.beecrowd.com.br/judge/pt/problems/view/2737
SELECT name, customers_number 
    FROM lawyers 
    WHERE customers_number = (SELECT MAX(customers_number) FROM lawyers)

UNION ALL

SELECT name, customers_number 
    FROM lawyers 
    WHERE customers_number = (SELECT MIN(customers_number) FROM lawyers)

UNION ALL

SELECT 'Average', CAST(AVG(customers_number) AS INTEGER) FROM lawyers
