-- link: https://judge.beecrowd.com/pt/problems/view/2996
SELECT 
    packages.year AS year,
    sender.name AS sender,
    reciver.name AS reciver
FROM packages
JOIN users sender ON sender.id = packages.id_user_sender
JOIN users reciver ON reciver.id = packages.id_user_receiver
WHERE 
    (packages.color = 'blue' OR packages.year = 2015) AND
    sender.address != 'Taiwan' AND 
    reciver.address != 'Taiwan'
ORDER BY packages.year DESC;
