#!/bin/bash
##Dara Lim
##Project3 Part D

## Insert the heading
echo ""
echo "NAME                  PHONE           JAN |  FEB |  MAR |"

##Changes the word 'Savage' to 'Savauge'
awk -F: '{sub(/Savage/, "Savauge");printf("%-20s %-16s $%-5s $%-5s $%-5s\n", $1, $2, $3 ,$4 ,$5)}' donors

##Put area code 916 to "specialAreaCode" file name
awk -F: '$2 ~/916/' donors >> "specialAreaCode"

##Put firstname start with C or E in the file name CEnames
awk -F: '$1 ~/[CE]/' donors >> "CEnames"

##Put the donation more than 500 to file over500temp
awk -F: '{if($3+$4+$5>500) printf "%-20s %-16s $%-5s\n", $1, $2, $3+$4+$5}' donors >> "over500temp"

## Sorts by last names
sort -k 2,2 over500temp >| over500.txt




