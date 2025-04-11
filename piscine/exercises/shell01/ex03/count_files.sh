total_count=$(($(find . -type f | wc -l) + $(find . -type d | wc -l))) && echo "$total_count"
# $ is used for math
# find finds files
# . current directory -type
# | is and that uses previous values 
# wc is word count -l is lines
# && é e
