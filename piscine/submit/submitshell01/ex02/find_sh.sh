find . -type f -name "*.sh" -exec basename {} .sh \;
# find searches for files
# the . represents the current directory
# -type defines the file type, f means it is a file
# -name indicates the name searched for
# * makes it search for anytype of .sh
# -exec executes a command on each line
# basename is used to extract the basename of the file
# {} replaces the file path with the value inside the brackets
# .sh is then sufix removed by basename 
# \ ends the command
