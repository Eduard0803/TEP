-- link: https://www.beecrowd.com.br/judge/pt/problems/view/2740
SELECT 'Podium: ' || team AS name
    FROM (SELECT * FROM league LIMIT 3) AS q1
UNION ALL
SELECT * FROM (
    SELECT 'Demoted: ' || team AS name
        FROM (SELECT * FROM league ORDER BY position DESC LIMIT 2) AS q2
        ORDER BY position ASC
) AS result;
