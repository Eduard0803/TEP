-- link: https://www.beecrowd.com.br/judge/pt/problems/view/2609
SELECT categories.name AS c1, SUM(products.amount) FROM categories JOIN products ON categories.id = products.id_categories GROUP BY c1;