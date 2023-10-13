-- link: https://www.beecrowd.com.br/judge/pt/problems/view/2739
SELECT name, CAST(EXTRACT(DAY FROM payday) AS INTEGER) FROM loan;
