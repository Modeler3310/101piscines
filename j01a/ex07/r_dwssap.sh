cat /etc/passwd | grep -v '#' |sed "1d" | sed "n;d" | cut -d: -f1 | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' ' ' | sed 's/ /, /g' | sed -E 's/, $/./g' | tr -d '\n'
