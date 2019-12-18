#!/bin/bash
##Dara Lim
##Project3 partC
function fileDir_ex()
{
for i in "$@"
    do
        if [ -e "$i" ]
	        then
                if [ -f "$i" ]
                    then
                        echo "$i exist and is a regular file"
                elif [ -d "$i" ]
                    then
                        echo "$i exist and is a directory"
                else
                    echo "exist and is a special file"
                fi
        else
	        exit 1
        fi
done
}
k=$#
if [ $k -eq 0 ]
	then 
		echo "USAGE:fileInfo.sh with multiple file or directory"
        exit 1
fi


