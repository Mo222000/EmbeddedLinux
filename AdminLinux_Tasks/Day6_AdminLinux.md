### Day6_AdminLinuxTask
## 1. create a folder called myteam in your home directory and change its premissions to read only for the owner.
Use `mkdir` to make your directory.  
Use ```chmod``` to change file premissions.  
Use `ls -l` to show premissions that you set.

## 2. Log out and Log in by another user.
Use `su` to switch on another user

## 3. Try to access by cd command the folder (my team)

this screenshot shows the output on terminal:
![Screenshot from 2023-12-13 09-07-24](https://github.com/Mo222000/EmbeddedLinux/assets/150931592/03b7e011-2c0a-4269-adfa-86bd2c46a563)

## 4.Using the command Line:
+ ### cahnge the premissions of oldpasswd file to give owner read and write premissions and for group write and execute and execute only for the others (using chmod in 2 different ways).
**Approch1:**  
`chmod 731 oldpasswd`   
**Approch2:**  
`chmod u=rw,g=rx,o=x oldpasswd`

+ ### change your defult premissions to be as above:
To change defult premissions you can use `umask 027` command  
The umask command sets the default permissions to subtract the specified values from the maximum permissions (usually 666 for files and 777 for directories). In this case, 027 means that the default permissions will be 640 for files (subtracting 027 from 666) and 750 for directories (subtracting 027 from 777).
> [!CAUTION]
> Remember that these changes will affect new files and directories created after running the umask command; they won't change the permissions of existing files or directories.

+ ### what is the maxmum permissions for file and directory:
**File:** The default maximum permission for a file is 666 (read and write for owner, group, and others).  
**Directory:** The default maximum permission for a directory is 777 (read, write, and execute for owner, group, and others).

+ ### change your default premisiions to be no premission to everyone then create directory:
this is screenshot to clearify that:
![Screenshot from 2023-12-13 09-46-54](https://github.com/Mo222000/EmbeddedLinux/assets/150931592/78873283-ffec-4a54-a4e2-dec070c3d60d)

## 5. Create a file with permission 444. Try to edit in it and to remove it? Note what happened:
That is mean that this file is with read only permissions so you cant edit the file or remove it 

## 6. What is the difference between the “x” permission for a file and for a directory?
+ **for files:** permission execute allows the file to run as a program
+ **for directory:** permission execute allows the user to change directory to this directory.

## 7.Create a new directory.
+ 1. Set the sticky bit on the newly created directory.

+ 2. set the setgui bit on the created directory
+ 3. Create multiple user accounts.
+ 4. Allow these users to create files within the directory and directory.
+ 5. Attempt to delete or rename each other's files.
+ 6. Provide a clear output demonstrating the impact of the sticky bit on file deletion and renaming within the
directory.
+ 7. Provide a clear output for the directory created.
![Screenshot from 2023-12-13 10-26-56](https://github.com/Mo222000/EmbeddedLinux/assets/150931592/56a97661-8014-42d6-864d-d0c8a6f82ebf)

## 8.List the permission passwd command has and explain why it has S 
![Screenshot from 2023-12-13 10-30-36](https://github.com/Mo222000/EmbeddedLinux/assets/150931592/477c1052-52f8-4f0b-9696-6bbec946439e)
> [!NOTE]
> The SUID bit allows a user to execute a program with the permissions of the program's owner (in this case, the
> root user).

