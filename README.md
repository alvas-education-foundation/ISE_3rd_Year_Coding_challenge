# ISE_3rd_Year_Coding_challenge

## Git Commands

## Starting
First Go to respective folder where you want to clone the repositories.

Open the Git Bash/windows powershell for windoes or terminal for linux. 

Check whether you are in same location on your terminal, if not the use the following command

```bash
cd path/location

```
Move to the specific directory.

## Clone the Repo

In the Terminal copy and paste this command to clone this repo

```bash
git clone https://github.com/alvas-education-foundation/ISE_3rd_Year_Coding_challenge.git
```

If you have clone it successfully you will
 - see the new file in the folder
 - to move inside use cd /reponame

After Creating the new folder with your name Add/Create/(paste) your files.

## Add and Commit
Once you made all changes use
```bash
git add .
```
Note add . will add all the new files if you want to add specific file mention it after add

To see the changes use the command
```bash
git status
```
If you have added successfully you we see the files as unstagged files

Use the following to Commit the files

```bash
git commit -m "commit message"
```

## To add and commit with single command
Use the following 

```bash
git commit -am "commit message"
```

Do check with git status after adding and commit.

## Push to the repo.

```bash
git push
```
## Pull from repo
To match all the changes from your remote repo to your local repo.

```bash
git pull
```
You may get a prompt to enter commit messageduring merging, If u want to write the message than type and use hit ``` ESC``` keyword , then :x to save and Quit.


## Check Log
To check the the log details of all commits 

```bash
git log
```

## During pull or push if you face any problem set master as upstream.

```bash
git push -u origin master
```
This  pushes your master branch to origin


### Merging and Branching commands will be updated soon

<em> If you are interested in learning more commands, have a look at https://git-scm.com/docs </em>
