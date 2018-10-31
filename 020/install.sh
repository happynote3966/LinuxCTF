#!/bin/sh

gcc -o my_executable 020.c

mkdir /usr/local/sbin/linuxctf{which_is_searching_the_file}/
cp my_executable /usr/local/sbin/linuxctf{which_is_searching_the_file}/

echo "PATH=\$PATH:/usr/local/sbin/linuxctf{which_is_searching_the_file}" >> /etc/profile
echo "export PATH" >> /etc/profile
