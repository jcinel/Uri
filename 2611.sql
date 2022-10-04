SELECT movies.id, movies.name FROM movies WHERE id_genres = 
(SELECT genres.id FROM genres WHERE description = 'Action') 
GROUP BY id