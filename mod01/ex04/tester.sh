#!/bin/bash

echo "No arguments: ./replace"
./replace
echo "
-----
"
#---------------------------------------------------
echo "Too many args: ./replace 1 2 3 4"
./replace "1" "2" "3" "4"
echo "
-----
"
#---------------------------------------------------
echo "Invalid file: ./replace nothing.txt a b"
./replace nothing.txt "a" "b"
echo "
-----
"
#---------------------------------------------------
echo "Replace empty with something: ./replace tests/lorem.txt \"\" something"
./replace tests/lorem.txt "" "something"
echo "
-----
"
#---------------------------------------------------
echo "Normal Execution: ./replace tests/42.txt 42 69"
./replace tests/42.txt "42" "69"
echo "
-----
"
#---------------------------------------------------
echo "Large file: ./replace tests/bible.txt Jesus Bob"
./replace tests/bible.txt "Jesus" "Bob"
echo "
-----
"
#---------------------------------------------------
echo "Long single line: ./replace tests/loremline.txt ' ' \n"
./replace tests/loremline.txt " " "
"
echo "
-----
"
#---------------------------------------------------
echo "Replace newlines: ./replace tests/lorem.txt "\n" /"
./replace tests/lorem.txt "
" "/"
echo "
-----
"
echo "Finished"