#! /usr/bin/bash

# #!- is called as shibang

# Printing 
# echo "Hello there!"
# echo "Hello World!" > file.txt

# this writes the content into file.txt
# cat > file.txt
# this appends the content into file.txt
# cat >> file.txt

: '
this is a multiline comment 
this is a multiline ocmment
this is a mulitline comment
'

# the concept of heredoc:
# cat << sample
# Hey there this is a sample for heredoc
# Hey there this is a sample for heredoc
# sample

DAY="monday"
if [ $DAY == "monday" ]; then
    echo "Today is monday"
elif [ $DAY == "" ]
fi