-- link: https://judge.beecrowd.com/pt/problems/view/2990
SELECT 
    empregados.cpf,
    empregados.enome,
    departamentos.dnome
FROM empregados
JOIN departamentos ON empregados.dnumero = departamentos.dnumero
LEFT JOIN trabalha ON trabalha.cpf_emp = empregados.cpf
WHERE trabalha.cpf_emp IS NULL
ORDER BY empregados.cpf;
