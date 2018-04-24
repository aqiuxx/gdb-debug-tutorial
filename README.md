
# 1 useful manual
info gdb

# 2 quick key for tui    
layout：用于分割窗口，可以一边查看代码，一边测试。主要有以下几种用法：
layout src：显示源代码窗口
layout asm：显示汇编窗口
layout regs：显示源代码/汇编和寄存器窗口
layout split：显示源代码和汇编窗口
layout next：显示下一个layout
layout prev：显示上一个layout
Ctrl + L：刷新窗口
Ctrl + x，再按1：单窗口模式，显示一个窗口
Ctrl + x，再按2：双窗口模式，显示两个窗口
Ctrl + x，再按a：回到传统模式，即退出layout，回到执行layout之前的调试窗口。
ctrl + p 
ctrl + n 

#3 python
shell ps
python gdb.execute('next')
python bp = gdb.Breakpoint('hello.c:9')
python bp.enabled = False

python
print(bps)
end

python print (bps[0].location )


python val_i = gdb.parse_and_eval('i')
python print (' var_i is %d' %d var_i )
i的值一变，var_i需要重新获取

python help(gdb)
python help(gdb.Breakpoint)

#4 beauty

set print pretty on

ctrl + z ---- stop the gdb
less hello.c
fg
call function1(&struct_A)

#5 reverse debug
shell cat hello.c

 
source pretty.py
 

while ./bubble_sort ; do echo ok; done 
# "if there is a segment fault "

ls core*
ls -lth core* | head

gcc -c core.123
会出现报错的地方

打印出错的指令
print $pc

显示代码地址
x $1 

bt



record
continue

break main
break _exit

command 2
record continue
end

command 3
run
end

run
bt 
reverse-stepi


print $sp
x/8 $1
print *(long **)0x7ffff1234
x $2


#7 watch something

watch *(long **)0x7ffff1234
watch -p *(long **)$sp
watch -l

reverse-continue


whatis array
print sizeof array

#8 multi process debug



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

