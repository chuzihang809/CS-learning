### q2:在 `/tmp` 下新建一个名为 `missing` 的文件夹

```shell
cd /tmp
mkdir missing
```



### q3:用 `man` 查看程序 `touch` 的使用手册。

```shell
man touch
```

touch命令用于修改文件或者目录的时间属性，包括存取时间和更改时间。若文件不存在，系统会**建立一个新的文件**.
使用指令"touch"修改文件"testfile"的时间属性为当前系统时间，输入如下命令: touch testfile

使用ls -l可查看文件**权限**



### q4:用 `touch` 在 `missing` 文件夹中新建一个叫 `semester` 的文件

使用命令touch 文件名 如果文件不存在将直接创建文件

```shell
cd ./missing 
touch semester
```



### q5:将以下内容一行一行地写入 `semester` 文件

未学习vim阶段，我们利用echo写入语句
注意！ 恰当的利用 >>来**追加**输入而非>来覆盖

```shell
echo '#!/bin/sh' > file
echo  'curl --head --silent https://missing.csail.mit.edu' >> file
```



### q6:尝试执行这个文件,将该脚本的路径（`./semester`）输入到您的 shell 中并回车。如果程序无法执行，请使用 `ls` 命令来获取信息并理解其不能执行的原因。

通过ls -l发现在当前身份下文件**只有r权限**

### q7:查看 `chmod` 的手册

chmod（英文全拼：change mode）命令是**控制用户对文件的权限的命令**

文件调用权限分为三级：文件所有者、用户组、其它用户
分别对应command ls -l中的三组字母
通常文件所有者拥有rwx权限 用户组拥有rx权限

### q8:使用 `chmod` 命令改变权限，使 `./semester` 能够成功执行
chmod 命令可以用八进制指定权限
r权限数4，w权限数2，x权限数1
如果要获取rwx权限 权限数=4+2+1=7
rw权限数=4+2=6
故如果要使得file文件获得在三种用户中获得rwx权限

```shell
chmod 777 file
```

### q9:将 semester 文件输出的最后更改日期信息，写入主目录下的 `last-modified.txt` 的文件中

```shell
./semester | grep last-modified > last-modified.txt
```

