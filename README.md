# Linux Kernel System Call: getprocessinfS22

## Problem Statement

1. **Implementing the System Call**:
   - Develop a new system call named `getprocessinfS22` that retrieves various details about the current process, such as counter, nice value, process ID, parent process ID, user ID, priority, state, policy, and priority value calculated with the nice value.

2. **Testing the System Call**:
   - Create a user-space program to test the `getprocessinfS22` system call. This program should:
     - Send a structure variable to the system call.
     - Retrieve and display process information based on the value of `f`.
     - Modify some process properties using predefined Unix system calls.
     - Verify the changes made using the `getprocessinfS22` system call.

## Usage

1. **Kernel Implementation**:
   - Add the `getprocessinfS22` system call to the Linux kernel.
   - Define the structure for process information as specified.
   - Rebuild the kernel to incorporate the new system call.

2. **User-Space Program**:
   - Compile the provided user-space program.
   - Run the program, providing appropriate values for `f` to control behavior.
   - Observe the process information retrieved and the changes made to process properties.

## Important Notes

- Follow the provided structure and naming conventions for the system call and data structure.
- Ensure proper restoration of the kernel environment after debugging sessions.
- Prepare to answer questions about the current process and its parent process during the project demonstration.

## Additional Resources

- [Linux Kernel Compilation Guide](link_to_kernel_compilation_guide)
- [Linux Kernel Source Code](link_to_kernel_source_code)

**Note**: Replace placeholders like `link_to_kernel_compilation_guide` and `link_to_kernel_source_code` with actual links to relevant resources.
