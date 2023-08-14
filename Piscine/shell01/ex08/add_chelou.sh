#!/bin/bash
BASE="'\\\\\"?!"
#FT_NBR1=\'\?\"\\\"\'\\ 
#FT_NBR2=rcrdmddd 
tr1=$(tr $BASE 01234 <<<$FT_NBR1)
tr2=$(tr 'mrdoc' 01234 <<<$FT_NBR2)
x=$((5#$tr1 + 5#$tr2))
#echo $((13#$x))
#echo $x
#echo $(tr 0123456789ABC 'gtaio luSnemf' <<< $((13#$x)))

base_chars=("g" "t" "a" "i" "o" " " "l" "u" "S" "n" "e" "m" "t")

converted=""
while ((x > 0)); do
    remainder=$((x % 13))
    converted="${base_chars[remainder]}$converted"
    x=$((x / 13))
done

echo "$converted"

