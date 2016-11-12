find . -name "*.sh" | cut -d'.' -f2 | awk -F "/" '{print $NF}'
