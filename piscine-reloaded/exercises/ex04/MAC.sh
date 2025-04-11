ifconfig | grep ether | awk '{print $2}'
#ifconfig pulls up network interface paramaters
# | uses the output on the left for the as input for the command on the right
# grep searches for lines containing ether
# awk edits text and uses whitespace as the field sperator
# {print $} tells awk to print the second field which since the MAC address
#is separated by : and not whitespace is the entire MAC address.
