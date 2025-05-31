# 📆 2025.05.15
## 🟦 Question 01 – Windows Command Prompt (CMD)

### 📄 Task:
Perform the following operations using Command Prompt:

1. Create new directories named `CSC2244`, `Marks`, and `Exam` on the Desktop.
2. Inside `CSC2244`, create subdirectories: `practical`, `theory`, and `exam papers`.
3. In each subdirectory, create:
   - A text file
   - A Word document
   - A PowerPoint document
4. On the Desktop, create two Excel files: `Icae Marks.xlsx` and `Final Exam Marks.xlsx` and move them into `Marks`.
5. Copy `Marks` into `Exam`, then hide the `Exam` folder.

### ✅ Commands:
<pre>cmd
cd %USERPROFILE%\Desktop
mkdir CSC2244 Marks Exam

cd CSC2244
mkdir practical theory "exam papers"

cd practical
echo. > practical.docx
echo. > practical.pptx
echo Practical text > practical.txt

cd ..\theory
echo. > theory.docx
echo. > theory.pptx
echo Theory text > theory.txt

cd "..\exam papers"
echo. > exam.docx
echo. > exam.pptx
echo Exam test > exam.txt

cd %USERPROFILE%\Desktop
echo. > "Icae Marks.xlsx"
echo. > "Final Exam Marks.xlsx"
move "Icae Marks.xlsx" Marks
move "Final Exam Marks.xlsx" Marks

xcopy /E /I Marks Exam\Marks
attrib +h Exam</pre>

![Question01_01](https://github.com/user-attachments/assets/e5da22e4-287e-4635-8c8e-b31250859928)
![Question01_02](https://github.com/user-attachments/assets/8f4d660d-1385-4da7-9641-f75204bc696d)
![Question01_03](https://github.com/user-attachments/assets/0ee8c989-3154-4c89-aa74-4e88a819f0cb)
![Question01_04](https://github.com/user-attachments/assets/ce254cee-0c8a-4539-8969-9c3c2452f14a)
![Question01_05](https://github.com/user-attachments/assets/f542a021-d504-4c08-8a8e-7618d1262a29)

## 🟨 Question 02 – Bash: GPA Filtering from CSV

### ✅ Task 1: Filter students with GPA > 3.5
```awk -F',' 'NR==1 || $4 > 3.5' data.csv```

### ✅ Task 2: Calculate average GPA
```awk -F',' 'NR>1 {sum += $4; count++} END {print "Average GPA:", sum/count}' data.csv```

![Question02](https://github.com/user-attachments/assets/c4165f49-e233-4c65-be7d-29f75f8aa1ea)

## 🟩 Question 03 – Bash: Compare String Lengths
### ✅ Script: compare_strings.sh
Reads two strings from the user and prints the longer one.

<pre>echo "Enter String_1"
read str1

echo "Enter String_2"
read str2

len1=${#str1}
len2=${#str2}

if [ $len1 -gt $len2 ]; then
    echo "$str1 is larger than $str2"
elif [ $len2 -gt $len1 ]; then
    echo "$str2 is larger than $str1"
else
    echo "$str1 and $str2 are of equal length"
fi</pre>

![Question03](https://github.com/user-attachments/assets/1f6a3274-4a1c-495f-ad6c-f30ad61c7f22)
