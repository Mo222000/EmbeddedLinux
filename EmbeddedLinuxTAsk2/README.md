# Toggling Led Project:
In this Project i used 2 MCAL Drivers **DIO** and **PORT**, so i make a 2 static libraries **DIO.a** and **PORT.a**.

I copy all includes files in **/usr/include**
and copy all libraries in **/usr/lib** 
```bash
gcc -c PORT.c PORT_CONFIG.c 
ar -rcs libport.a *.o
gcc -c DIO.c
ar -rcs libdio.a DIO.o
cp libdio.a libport.a /usr/lib
gcc main.c -ldio -lport
```
## Why Use a Static Library over Dynamic Library in AVR Applications?
While using a static library provides several advantages in AVR applications, there are cases where dynamic libraries might be preferred.  
Consider the following factors:
- ### Memory Efficiency:
AVR microcontrollers often operate in resource-constrained environments with limited program memory (Flash) and data memory (RAM). Static libraries are linked directly into the application during compilation, leading to a more memory-efficient footprint. This is particularly crucial in embedded systems where minimizing memory usage is a primary concern.

- ### Predictable Execution:
Static linking provides a predictable and deterministic execution environment. All required library functions are resolved at compile time, eliminating the need for a dynamic linker during runtime. This predictability is advantageous in real-time systems, where consistent and known execution behavior is essential.

- ### Reduced Overhead:

Dynamic libraries introduce runtime overhead due to the need for a dynamic linker/loader. In AVR applications, which often run on low-power and resource-constrained devices, minimizing overhead is critical for achieving optimal performance and power efficiency. Static libraries eliminate this runtime overhead as everything is resolved at compile time.


- ### Simplified Deployment:

 Static libraries simplify the deployment process. The compiled application contains all necessary code, making it easy to distribute and deploy without worrying about library dependencies at runtime. This is particularly advantageous in scenarios where simplicity and ease of deployment are prioritized.


