#!/bin/bash
##Dara Lim
##This script is to determine if a participant's total score
##greater than 24 or not. If it is then print the message 
##"Good luch tommorow" otherwise print "Good luch next time"
echo "Enter the number of participant you want to find the total score"
read numName
for ((i=1; i <= numName; i++ ))
	do
		echo "Enter the name of participant $i"
		read name
		echo "Enter the first score1"
		read score1
		echo "Enter the second score2"
		read score2
		echo "Enter the third score3"
		read score3
		totalScore=$((score1+score2+score3))
		echo ""
		if [[ $totalScore -ge 24 ]]
			then
				echo -n "$name $score1 $score2 $score3 total: $totalScore ";				   echo "Good luck tomorrow" 
			else
				echo -n "$name $score1 $score2 $score3 total: $totalScore ";				   echo "Good luch next time"
		fi
done	

##Display the content of script program
cat result.sh

