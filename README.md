# Reading-writing-user-space-from-to-the-kernel
This project involves creating a new system call in the Linux kernel that provides detailed information about the current process. The system call accepts a data structure pointer as an argument and returns process-specific data. Additionally, a user-space program is implemented to test this system call, enabling manipulation of process properties and verification using the system call.

Problem Statement
Implementing the System Call: Develop a new system call named getprocessinfS22 that retrieves various details about the current process, such as counter, nice value, process ID, parent process ID, user ID, priority, state, policy, and priority value calculated with the nice value.

Testing the System Call: Create a user-space program to test the getprocessinfS22 system call. This program should:

Send a structure variable to the system call.
Retrieve and display process information based on the value of f.
Modify some process properties using predefined Unix system calls.
Verify the changes made using the getprocessinfS22 system call.
Usage
Kernel Implementation:

Add the getprocessinfS22 system call to the Linux kernel.
Define the structure for process information as specified.
Rebuild the kernel to incorporate the new system call.
User-Space Program:

Compile the provided user-space program.
Run the program, providing appropriate values for f to control behavior.
Observe the process information retrieved and the changes made to process properties.
Important Notes
Follow the provided structure and naming conventions for the system call and data structure.
Ensure proper restoration of the kernel environment after debugging sessions.
Prepare to answer questions about the current process and its parent process during the project demonstration.
Additional Resources
Linux Kernel Compilation Guide
Linux Kernel Source Code
Note: Replace placeholders like link_to_kernel_compilation_guide and link_to_kernel_source_code with actual links to relevant resources
