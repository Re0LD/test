# git learn logs 
>**git config -global user.name "name"**
git的名字
---
>**git config -global user.email "email@example.com"**
git的邮箱
---
>**git init**
将该目录变成git可以管理的仓库
---
>**git add filename**
将文件添加到暂存区
---
>**git commit -m "注释"**
将文件提交到当前分支（因为在创建git版本库的时候，git创建了一个master分支，所以该指令是往master分支上提交更改的）
---
>**git status**
显示当前仓库的状态，即文件是否被修改
---
>**git diff**
查看文件具体被修改了什么内容
---
>**git log**
查看历史版本记录，以及当前版本
---
>**git reset --hard HEAD^**
回到上个版本 HEAD^^就是回到上上个版本 HEAD~100就是回到上100个版本;也可以输入commit id 号回到该版本
---
>**git reflog**
查看历史命令
---
>**git checkout -- file**
丢弃工作区的修改
---
>**git reset HEAD < file >**
将暂存区的修改撤销掉
---
>**git remote add origin git@github.com:name/repo.git**
将本地的git仓库关联到github中，即添加远程库
---
>**git push -u origin master**
将当前分支推送到远程,-u不仅把本地分支推送到远程，也把本地和远程的master关联起来
---
>**git clone git@github.com:name/repo.git**
克隆一个本地库
---
>**git checkout -b branchname**
创建并切换到branchname分支
---
>**git branch**
查看当前分支
---
>**git checkout branchname**
切换到branchname分支
---
>**git merge branchname**
合并指定branchname分支到当前分支
---
>**s**