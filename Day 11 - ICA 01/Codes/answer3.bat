
:: Read two strings from the user
echo "Enter String_1"
read str1
echo "Enter String_2"
read str2

:: Get lengths
len1=${#str1}
len2=${#str2}

:: Compare and print result
if [ $len1 -gt $len2 ]; then
    echo "$str1 is larger than $str2"
elif [ $len2 -gt $len1 ]; then
    echo "$str2 is larger than $str1"
else
    echo "$str1 and $str2 are of equal length"
fi
