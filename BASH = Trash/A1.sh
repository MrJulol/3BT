#!/bin/bash
cd ~/Documents
mkdir -p excercise_one
cd excercise_one
for ((i=0;i<10;i++))
do
	touch test_$i".txt"
	echo $(pwd)>> test_$i".txt"
done

touch summary".txt"
ls -a>>summary.txt