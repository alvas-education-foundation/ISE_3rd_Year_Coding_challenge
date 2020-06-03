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
![git clone](https://user-images.githubusercontent.com/33172934/82408514-57a74b00-9a89-11ea-9ad3-d345be3818f7.png)

If you have clone it successfully you will
 - see the new file in the folder
 - to move inside use cd /reponame
 
 ![git cd](https://user-images.githubusercontent.com/33172934/82408762-ef0c9e00-9a89-11ea-9b12-944bb8652866.png)

After Creating the new folder with your name Add/Create/(paste) your files.

## Add and Commit
Once you made all changes use
```bash
git add .
```
![git add](https://user-images.githubusercontent.com/33172934/82408583-7efe1800-9a89-11ea-8130-b33ae2a41cad.png)

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
![git commit](https://user-images.githubusercontent.com/33172934/82408603-8e7d6100-9a89-11ea-9bc1-da9bcff7287d.png)


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
![git push](https://user-images.githubusercontent.com/33172934/82408636-a2c15e00-9a89-11ea-9350-965463746147.png)


## Pull from repo
To match all the changes from your remote repo to your local repo.

```bash
git pull
```
![git pull](https://user-images.githubusercontent.com/33172934/82408715-d13f3900-9a89-11ea-972a-57e553612478.png)

You may get a prompt to enter commit messageduring merging, If u want to write the message than type and use hit ``` ESC``` keyword , then :x to save and Quit.


## Check Log
To check the the log details of all commits 

```bash
git log
```
![git log](https://user-images.githubusercontent.com/33172934/82408663-b240a700-9a89-11ea-97e8-eb7092670e38.png)

## During pull or push if you face any problem set master and push.

```bash
git push origin master
```
This  pushes your master branch to origin


## Using .gitignore
If you are using a editor(vscode,atom etc) to push the might be unwanted files or their might be files which you create on yout local repo which you don't want to add on github(remote repo) which may get added default while you commit and push.
To overcome this create a folder and name it ```.gitignore``` and add the name of the files which you dont want to push or include in remote repo.



### Merging and Branching commands will be updated soon

<em> If you are interested in learning more commands, have a look at https://git-scm.com/docs </em>
