ldapsearch -Q cn | sed -e '/^#/d' |tr -s '[:upper:]' '[:lower:]' | grep " bon" | cut -d" " -f3 | grep "bon" | wc -l | tr -d " "
