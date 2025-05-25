:: Go to Desktop and create CSC2244, Marks, and Exam directories
cd %USERPROFILE%\Desktop
mkdir CSC2244 Marks Exam

:: Create subdirectories inside CSC2244
cd CSC2244
mkdir practical theory "exam papers"

:: Create files inside practical
cd practical
echo. > practical.docx
echo. > practical.pptx
echo Practical text > practical.txt

:: Create files inside theory
cd ..\theory
echo. > theory.docx
echo. > theory.pptx
echo Theory text > theory.txt

:: Create files inside exam papers
cd "..\exam papers"
echo. > exam.docx
echo. > exam.pptx
echo Exam test > exam.txt

:: Go back to Desktop
cd %USERPROFILE%\Desktop

:: Create Excel files and move them into Marks directory
echo. > "Icae Marks.xlsx"
echo. > "Final Exam Marks.xlsx"
move "Icae Marks.xlsx" Marks
move "Final Exam Marks.xlsx" Marks

:: Copy Marks directory into Exam directory
xcopy /E /I Marks Exam\Marks

:: Hide the Exam directory
attrib +h Exam
