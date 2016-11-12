	cat $1 | grep -i "Bomber" | grep -o "[0-9-]\+" | sed '/-/!d' |
  sed '/1242$/d' | sed '/4028$/d' | sed '2d'
