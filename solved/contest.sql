-- link: https://www.beecrowd.com.br/judge/pt/problems/view/2738
SELECT candidate.name, ROUND((score.math*2+score.specific*3+score.project_plan*5)/10, 2) AS result 
    FROM candidate 
    JOIN score ON candidate.id = score.candidate_id 
    ORDER BY result DESC
;
