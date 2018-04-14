gcc -c test gdb.c
gdb test
b main
start
x/20i $pc


gcc -c test gdb.c
b main
start/run
x/20i $pc
disas
list
list 5
<return> list next 10
info register
i f

next 
print sum
next 

step
print sum
step 
print sum


p big <no symbol>

b <line>
c

p sum

i f
frame 0
frame 1
up
down 

print string
x string
x/10b
x <compare to print string>

watch
rwatch i 
info watch
next

delete 12
delete breakpoints

bt 

set val sum=20

<loop program>--> gdb attach

