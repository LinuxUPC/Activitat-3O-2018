
gcc -O0 -w codi.c 2> errorlog.txt || sl;
if [ ! -f a.out ]
then
    clear ;
    echo ;
    cat errorlog.txt ;
else 
    clear ;
    echo;
    ./a.out ;
fi

rm -f a.out errorlog.txt errorlog-d.
rm -f a.out errorlog.txt errorlog-d.txt
