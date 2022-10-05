SELECT candidate.name, 
cast(((math*2.00 + specific*3.00 + project_plan*5.00)/10.00) as decimal(10,2)) AS avg 
FROM candidate, score WHERE candidate.id = score.candidate_id ORDER BY avg DESC