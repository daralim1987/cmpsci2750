#!/bin/bash
## Dara Lim
## This script's purpose is to display some information as follow

## Check the number of parameters and their types and exit if not two parameter
if [[ $# > 2 || $# < 2 ]]
	then
		echo "More or less parameters"
		exit 1;
	else
	:
fi

## Check if the file exists
if [[ -f $1 ]]
	then 
		:
	else
		echo "File does not exits"
		exit 1;
fi

## Check if the directory exits
if [[ -d $2 ]]
	then 
		:
	else
		echo "Directory does not exist"
		exit 1;
fi

## Store Usage information
USAGE="$0 file_name dir_name"

## The name of script
echo -n "1. Name of script: "; echo $0

##Display the usage message
echo "2. Synopsis: "; echo $USAGE

## Display the current date and time
echo "3. Current date and time: "
echo $(date)

##Display the user's name
echo -n "4. Username: "; echo $USER

##Display the current working directory
echo -n "5. Current working directory: "; pwd

##Display the name of UNIX machine
echo -n "6. Name of UNIX machine: "; echo $HOSTNAME

##Display the name of login shell
echo -n "7. Name of login shell: "; echo $SHELL

##Display the contents of the required file
echo -n "8. Contents of the file: "; cat $1

##Listing the required directory
echo "9. List of the directory: "
ls $2

##Display the total number of parameter of the script
echo -n "10. Number of paramters: "; echo $#

##Display calender of October
echo "11. Calendar of October 2018: "
cal -m October

##Display the disk usage
echo "12. Disk usage within the file parameter: "; du -hc $1

##Display the current number of user
echo -n "13. Current number of user in the system: "
users | wc -w

##Display the current time
echo -n "14. Current time: "; date +%T



