# 📂 Linux Commands for VS Code Terminal

In this project, I have listed all the essential commands used in the **Linux terminal** within **Visual Studio Code** (VS Code). These commands are helpful for managing files, navigating the system, and performing various development tasks.

---

## 🐧 Essential Linux Commands

| **Task**                              | **Command**                                   |
|---------------------------------------|-----------------------------------------------|
| List files                            | `ls`                                          |
| Detailed list                         | `ls -l`                                       |
| Change directory                      | `cd foldername`                               |
| Go back one directory                 | `cd ..`                                       |
| Make a new folder                     | `mkdir foldername`                            |
| Remove folder                         | `rm -r foldername`                            |
| Remove folder (force)                 | `rm -rf foldername`                           |
| Remove file                           | `rm filename`                                 |
| Copy file                             | `cp source destination`                       |
| Move/Rename file                      | `mv oldname newname`                          |
| Create file                           | `touch filename`                              |
| Edit file (terminal)                  | `nano filename` or `vim filename`             |
| View file content                     | `cat filename`                                |
| Search in file                        | `grep "text" filename`                        |
| Current directory                     | `pwd`                                         |
| Find a file                           | `find . -name filename`                       |
| Show current user                     | `whoami`                                      |
| Show running processes                | `top` or `htop`                               |
| Check disk space                      | `df -h`                                       |
| Check memory usage                    | `free -h`                                     |
| Install package (Debian/Ubuntu)       | `sudo apt install packagename`                |
| Update packages                       | `sudo apt update && sudo apt upgrade`         |
| Make script executable                | `chmod +x script.sh`                          |
| Run script                            | `./script.sh`                                 |

---

## 🧑‍💻 VS Code Commands

| **Task**                              | **Command**                                   |
|---------------------------------------|-----------------------------------------------|
| Open VS Code in current folder        | `code .`                                      |
| Open a specific file                  | `code filename`                               |
| Open a specific folder                | `code foldername`                             |
| Open with admin/sudo (if permitted)   | `sudo code .`                                 |

##  Git Commands

Git is a powerful tool for version control, allowing you to track changes, manage repositories, and collaborate with other developers.

---

### **Basic Git Commands**

| **Task**                          | **Command**                                 |
|-----------------------------------|---------------------------------------------|
| Initialize a Git repository       | `git init`                                  |
| Check the status of the repository| `git status`                                |
| Add changes to the staging area   | `git add <file>`                            |
| Add all changes to the staging area| `git add .`                                 |
| Commit changes                    | `git commit -m "Your commit message"`       |
| View commit history               | `git log`                                   |
| See changes between commits       | `git diff`                                  |
| Create a new branch               | `git branch <branch_name>`                  |
| List all branches                 | `git branch`                                |
| Switch branches                   | `git checkout <branch_name>`                |
| Merge a branch                    | `git merge <branch_name>`                   |
| Delete a branch                   | `git branch -d <branch_name>`               |

---

### **Working with Remotes**

| **Task**                          | **Command**                                 |
|-----------------------------------|---------------------------------------------|
| Add a remote repository           | `git remote add origin <repository_url>`    |
| View remote repositories          | `git remote -v`                             |
| Fetch changes from remote         | `git fetch`                                 |
| Pull changes from remote          | `git pull origin <branch_name>`             |
| Push changes to remote            | `git push origin <branch_name>`             |
| Push changes to remote upstream   | `git push -u origin <branch_name>`          |
| Remove a remote                   | `git remote remove <remote_name>`           |

---

### **Working with Tags**

| **Task**                          | **Command**                                 |
|-----------------------------------|---------------------------------------------|
| Create a tag                      | `git tag <tag_name>`                        |
| View tags                         | `git tag`                                   |
| Push a tag to remote              | `git push origin <tag_name>`                |
| Delete a tag locally              | `git tag -d <tag_name>`                     |
| Delete a tag from remote          | `git push origin --delete <tag_name>`       |

---

### **Stashing Changes**

| **Task**                          | **Command**                                 |
|-----------------------------------|---------------------------------------------|
| Stash changes                     | `git stash`                                 |
| List stashed changes              | `git stash list`                            |
| Apply stashed changes             | `git stash apply`                           |
| Drop a stashed change             | `git stash drop`                            |

---

### **Undo Changes**

| **Task**                          | **Command**                                 |
|-----------------------------------|---------------------------------------------|
| Unstage changes                   | `git reset <file>`                          |
| Discard changes in a file         | `git checkout -- <file>`                    |
| Reset to a specific commit        | `git reset --hard <commit_hash>`            |
| Revert a commit                   | `git revert <commit_hash>`                  |

##  Branch 
## 🌱 Git Branching

| **Task**                                       | **Command**                                 |
|-----------------------------------------------|---------------------------------------------|
| Rename the current branch from master to main | `git branch -m master main`                 |
| See all branches                              | `git branch -a`                             |
| Rename any branch                             | `git branch -m old_name new_name`           |
| Create a new branch                           | `git checkout -b branch_name`               |

---

## ⚙️ Git Configuration

| **Task**                                       | **Command**                                 |
|-----------------------------------------------|---------------------------------------------|
| Set the username                              | `git config --global user.name "Your Name"`  |
| Set the email address                         | `git config --global user.email "you@example.com"` |

# ** Conda Environments"
## 🐍 Conda: Checking Libraries

| **Task**                                        | **Command**                                 |
|-------------------------------------------------|---------------------------------------------|
| List all libraries in the active conda environment | `conda list`                             |
| List libraries in a specific conda environment  | `conda list -n environment_name`            |
| Activate a specific conda environment           | `conda activate environment_name`           |
| Deactivate the current conda environment        | `conda deactivate`                          |
