:: Filter rows where GPA > 3.5
awk -F',' 'NR==1 || $4 > 3.5' data.csv

:: Calculate the average GPA of all students
awk -F',' 'NR>1 {sum += $4; count++} END {print "Average GPA:", sum/count}' data.csv
