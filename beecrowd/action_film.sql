-- link: https://www.beecrowd.com.br/judge/pt/problems/view/2611
SELECT movies.id, movies.name FROM movies JOIN genres ON movies.id_genres = genres.id WHERE genres.description = 'Action';
