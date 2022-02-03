# Resource-Allocation-Graph-Program
This program aims to mimic the functionality of an OS,to generate a Resouce Allocation Graph,to give an idea of what resources are allocated to what processes.


## Functionality of the Program
 - There is predefined limit of processes.The filesystem mimics a 4x3 structure
- Resources are then assigned by the user to the processes. 
- Given the resource, the program will be able to point out to the process to which the particular resource(input) is allocated to. 
- If the resource is allocated to a process and facing a deadlock ,return counts of deadlock,along with the [row] [column] location where the resouce locates 

## Motivation

- I am in constant awe of an OS.It is a super machine that is able to do anything
- It's functionalities never cease to amaze me and I love the subject
- This program is created as a humble action to mimic at least one feature of an OS

## Programming Language Used

- The program is coded in C++ Language

## Screenshots 

Case 1 -The user specifies 3 columns for the filesystem,while providing an input of 12 processes in total.

- These processes are mapped to resources A,B and C
- The user now provides a resource (4),to check for an occurance of deadlock 

![Output1](https://user-images.githubusercontent.com/77625109/122248958-154b7a00-cee6-11eb-84e4-6f80ab1d068e.png)

Since resource '4' resides at [1][1] and [2][1] it returns a deadlock count of 1
-Why? - It is because initial count of deadlocks are set to -1
![Output 2](https://user-images.githubusercontent.com/77625109/122251142-e0d8bd80-cee7-11eb-93a7-e0330fe5268b.png)

Case 2 - The user specifies a total of 4 processes,while allocating 12 resources 
- After allocation,the structured filesystem is displayed
- It is observed that resource '6' is not allocated to any process

![Output 3](https://user-images.githubusercontent.com/77625109/122252032-aae80900-cee8-11eb-8e7a-60c3f31aac93.png)

- After analysing the filesystem,the program displays that there are no deadlocks
- A total count of -1 deadlocks are displayed

![Output 4](https://user-images.githubusercontent.com/77625109/122252060-b0ddea00-cee8-11eb-8d65-2d1bcfbceae5.png)

## Improvements:-
There is definitely a scope to increase the structure of the file system from a 4x3 matrix,to a user defined matrix
It is one of the limitations,where the program comes short in.

This repository is open to the public,to collaborate and contribute.Get in touch with me and I would be more than happy
