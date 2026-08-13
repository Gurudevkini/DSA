WITH filtered_stadium AS (
    SELECT 
        id,
        visit_date,
        people,
        id - ROW_NUMBER() OVER (ORDER BY id) AS group_id
    FROM Stadium
    WHERE people >= 100
),
group_counts AS (
    SELECT 
        id,
        visit_date,
        people,
        COUNT(*) OVER (PARTITION BY group_id) AS consecutive_count
    FROM filtered_stadium
)
SELECT id, visit_date, people
FROM group_counts
WHERE consecutive_count >= 3
ORDER BY visit_date;
