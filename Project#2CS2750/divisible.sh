#!/bin/bash
## Dara Lim
## Check if from 1 to the integer n entered by a the user is divible by 5, by 5 ## and by 3 and display the messages if integer divible

echo "Enter a positive integer n from 30 to 60"
read n
for (( i = 1; i <= $n; i++ ))
	do
		if (( $i % 5 == 0 ))
			then
				echo "divisible by 5"
		fi
		if (( $i % 5 == 0 && $i % 3 == 0 ))
			then 
				echo "divisible by 15"
		fi		
done

##Display the content of the script program
cat divisible.sh

