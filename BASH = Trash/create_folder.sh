#!/bin/bash
#$2 = name
#$1 = number 

mkdir -p $2
cd $2

for ((i = 1;i<=$1;i++))
do
    mkdir -p $i"_Übung"
    cd $i"_Übung"
    touch "aufgabe_"$i"_Thaler_Julian.c"
    echo -e "#inlcude <stdio.h>\n#include <stdlib.h>\n\nint main(){\n\tprintf(\"HelloWorld\");\n\treturn EXIT_SUCCESS;\n}">> "aufgabe_"$i"_Thaler_Julian.c"
    cd ..

done


