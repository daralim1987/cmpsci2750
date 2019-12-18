#!/bin/bash
##Dara Lim
##Project3 part B
echo "Enter string"
read str
while [[ "$str"=="yes" ]]
	do
    echo "Enter pattern"
    read pattern
    grep -i "$pattern" << here
JohnDoe,jdoe@great.com,800-555-1111,California
JaneDoe,jand@super.edu,876-555-1321,NewYork
JohnSmith,bsmith@fast.net,780-555-1234,Florida
PaulWang,pwang@cs.kent.edu,330-672-9050,Ohio
here
    if [[ $? == 1 ]]
        then
            echo "Pattern not found"
    fi
	echo "Enter string yes to find again"
	read str
done
