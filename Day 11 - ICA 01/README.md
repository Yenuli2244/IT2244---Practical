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
```cmd
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
attrib +h Exam

