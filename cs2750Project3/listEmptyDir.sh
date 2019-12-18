#!/bin/bash
##Dara Lim
##This script takes a directory as a paramter and loop through all file in this
##directory and display the file. If the directory is empty, add the directory 
##to EmptyDir.txt file.

USAGE="$0 directoryName"

if [[ $# != 1 || -f $1 ]]
    then
        echo "The number of parameter is not 1 or is a file"
        echo "Usage:"; echo $USAGE
        exit 1
fi

for file in $1/* 
    do
        echo "$(basename "$file")"
		if [[ -d "$file" && -z "$(ls -A "$file")" ]]
            then
                echo "$(basename "$file is the empty directory, added to EmptyDir.txt")";
                echo $file >> EmptyDir.txt;
        fi
done


