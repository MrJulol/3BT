#!/bin/bash
mkdir -p 3BT
cd 3BT
for ((i=0;i<10;i++))
do
	touch $i".txt"
done

for i in *
do
	echo "Hallo File" $i>>$i
done

# chmod +x file
# ./file 
