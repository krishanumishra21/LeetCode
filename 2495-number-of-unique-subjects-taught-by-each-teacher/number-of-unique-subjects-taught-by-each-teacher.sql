select 
 teacher_id,
 COUNT(DISTINCT subject_id)  AS CNT
 FROM TEACHER
 GROUP BY  teacher_id;