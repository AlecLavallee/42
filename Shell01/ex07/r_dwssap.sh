cat /etc/passwd | sed "s/:x*.*//g" | sed -n '1~2!p' | rev | tac
