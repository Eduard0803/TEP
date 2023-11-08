-- link: https://www.beecrowd.com.br/judge/pt/problems/view/2741
SELECT 'Approved: ' || name, grade FROM students WHERE grade >= 7 ORDER BY grade DESC;
