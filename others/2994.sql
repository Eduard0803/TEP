-- link: https://judge.beecrowd.com/pt/problems/view/2994
SELECT 
    doctors.name AS "name",
    ROUND(SUM(
        attendances.hours * 150 * (1 + work_shifts.bonus/100)
    ), 1) AS salary
FROM doctors
JOIN attendances ON attendances.id_doctor = doctors.id
JOIN work_shifts ON work_shifts.id = attendances.id_work_shift
GROUP BY doctors.name
ORDER BY salary DESC;
