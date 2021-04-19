# CAO-Assignment-1---Building-your-own-64-bit-Operating-System
This repository holds the source code of a 64 bit Operating System using [Youtube tutorial 1](https://youtu.be/FkrpUaGThTQ) and [Youtube tutorial 2](https://youtu.be/wz9CZBeXR6U) as a guide. Instead of displaying "OK" as in the tutorial, the NUST logo or NUST written in asterisks is coded and shown as the output.

## Prerequisites:
- A code editor e.g [Visual Studio Code](https://code.visualstudio.com/download) 
- [Docker](https://www.docker.com/products/docker-desktop)
- [Qemu](https://www.qemu.org/download/)
- gcc/g++ compiler e.g [MinGW](https://sourceforge.net/projects/mingw/)

## Building a Docker image:
Open the terminal and build image using the following code
>**docker build buildenv -t myos-buildenv**

## Building the image
- Linux or MacOS: `docker run --rm -it -v "$pwd":/root/env myos-buildenv`
- Windows (CMD): `docker run --rm -it -v "%cd%":/root/env myos-buildenv`
- Windows (PowerShell): `docker run --rm -it -v "${pwd}:/root/env" myos-buildenv`

If there is no syntax error in the code and it still won't build, `DOCKER_BUILDKIT=0` can be added in Dockerfile to fix this. 

## x86 Architecture Build
- `make build-x86_64`
- To leave the build environment enter `exit` in to the terminal

## Emulating the Operating System
Using the tool **Qemu** we can emulate the OS but it must be added as an environment variable. A detailed guide on how to do this is shown in this [Youtube Video](https://youtu.be/al1cnTjeayk). Then type in to the terminal:
>qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso -L "enter where qemu is located"

For example I would enter the following since qemu is in my C drive's Program Files:
`qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso -L "C:\Program Files\qemu"`

