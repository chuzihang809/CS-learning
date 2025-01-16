q2:
cd /tmp
mkdir missing

q3:
which touch
man touch
touch命令用于修改文件或者目录的时间属性，包括存取时间和更改时间。若文件不存在，系统会建立一个新的文件
使用指令"touch"修改文件"testfile"的时间属性为当前系统时间，输入如下命令: touch testfile
ls -l可查看文件属性

q4:
使用命令touch 文件名 如果文件不存在将直接创建文件

q5:
未学习vim阶段，我们利用echo写入语句
注意！ 恰当的利用 >>来输入而非>来覆盖
echo '#!/bin/sh' > file
echo  'curl --head --silent https://missing.csail.mit.edu' **>>** file

q6:
通过ls -l发现文件只有r权限

q7:
通过command sh 发现程序可以执行

q8:
文件调用权限分为三级：文件所有者、用户组、其它用户
分别对应command ls -l中的三组字母
通常文件所有者拥有rwx权限 用户组拥有rx权限
其他用户拥有r权限
r 表示可读取，w 表示可写入，x 表示可执行
chmod命令可以用八进制指定权限
r权限数4，w权限数2，x权限数1
如果要获取rwx权限 权限数=4+2+1=7
rw权限数=4+2=6
故如果要使得file文件获得在三种用户中获得rwx权限
则 command：chmod 777 file 三位数分别对应文件所有者、用户组、其它用户的权限数
