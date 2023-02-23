cat /etc/passwd | grep -v '#' | awk 'NR % 2 == 0' | cut -d ":" -f 1 | rev |sort -r | head -$FT_LINE2 | tail +$FT_LINE1 | tr "_\n" "_," | sed 's/,/, /g' | sed '$s/.$//' | sed '$s/.$/./'
