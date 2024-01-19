#!/bin/bash

read -p "Enter Your Name: " UserName 
read -p "Enter Family Name: " GroupName

if id "$UserName" &>/dev/null; then 
	echo "User '$UserName' already exists."

else
	sudo useradd -m "$UserName"
	echo "User '$UserName' created successfully."
fi

if grep "$GroupName" /etc/group &>/dev/null; then
	echo "Group '$GroupName' already exists."

else
	sudo groupadd "$GroupName"
	echo "Group '$GroupName' created successfully."
fi 

sudo usermod -aG "$GroupName" "$UserName"


echo "User information:"
sudo id "$UserName"

echo "Group information:"
sudo grep "$GroupName" /etc/group

# command &>/dev/null is used to perform specific task quitely without displaying output or errors


