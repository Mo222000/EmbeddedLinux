#!/bin/bash

bashrc_file="$HOME/.bashrc"

# Check if .bashrc file exists
if [ -f "$bashrc_file" ]; then
    # Append HELLO and LOCAL variables
    echo 'export HELLO="$HOSTNAME"' >> "$bashrc_file"
    echo 'export LOCAL=$(whoami)' >> "$bashrc_file"
    echo 'echo "Hello$HELLO"' >> "$bashrc_file"
    echo 'echo "Local: $LOCAL"' >> "$bashrc_file"
    echo "Environment variables appended to $bashrc_file"

    # Open another terminal using gnome-terminal
    gnome-terminal &
else
    echo "Error: $bashrc_file does not exist."
fi


