# git-calculator

# Python install
Please follow this guide to setup python:
`https://www.digitalocean.com/community/tutorials/install-python-windows-10`

# Instructions
Create a readme commit for the main branch. 
Create a dev branch. 
Then for each feature create a new branch. Use meaningful names for each branch. After the feature has been developed and tested, merge it back to dev.
Add work division documentation to the readme file.

The following features should be developed (one branch each):
- add
- subtract
- multiply 
- divide
- modulus
- square root

For each branch, create a new file with the operand function. e.g.
`add.py
def add(a,b):
  pass
`
then
`main.py
import add from add
def main():
  pass
`

The main file will contain:
- user input
- calling the operand functions

Each branch must be functional by itself using its respective operator.

Add proper code comments and use proper commit messages.
