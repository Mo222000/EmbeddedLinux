#!/bin/bash

cd ~
if [ -d "exam_directory" ]; then
	echo "The directory is exist."
	
	if [ -n "$(ls -A ~/exam_directory)" ]; then
		echo "The directory contain some files and this is files"
		ls ~/exam_directory
	else  
		echo "this directory is empty and i will create file1, file2 and file3"
		cd ~/exam_directory
		touch file1.txt 
		touch file2.txt
		touch file3.txt
	fi

else 
	echo "exam_directory doesn't exist i will create it with three empty files file1, file2, and file3"
	
	cd ~
	mkdir exam_directory
	cd ~/exam_directory
	touch file1.txt 
	touch file2.txt
	touch file3.txt
	
fi


