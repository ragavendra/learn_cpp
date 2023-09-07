# vim-cmake-boilerplate

### Instructions
Use the [vimrc](config/vimrc). You may have to install YoucompleteMe debugger like.

```
$ cd ~/.vim/plugged/YouCompleteMe

# Clone submodules
$ git submodule update --init --recursive# Install YCM
$ python3 install.py --clangd-completer

```

Follow below to setup the `env`
The companion repository for the [**Vim: Setting up a Build System and Code Completion for C and C++**](https://dane-bulat.medium.com/vim-setting-up-a-build-system-and-code-completion-for-c-and-c-eb263c0a19a1) guide.

### CMake
Below are common steps once `CMakeLists.txt` is created.

```
mkdir build
cd build
cmake ../Step_1
cmake --build .
./ExeName
```

### Build steps
a. `Ctrl + M` and `M` invokes `:Copen`
b. `Ctrl + M` and `bd` builds the `Debug`
c. `Ctrl + M` and `br` builds the `Release`

### Run program
a. Do `:call SetBinaryDebug("Boilerplate")` and `F6` will run exe from the `Debug`
a. Do `:call SetBinaryRelease("Boilerplate")` and `F7` will run exe from the `Debug`

### Gdb setup
1. Compile and Build program with debugging symbols
```
$ gcc -g main.c
```

2. Create or update this file for `history`
```
~/.gdbinit
set pagination off
set history save on
set history expansion on
```

To see code when debugging.
```
$ gdb -tui a.out
// or Ctrl + x + A
```

Basic debug commands.
```
f -> end of method
r -> run
s -> step
p varName --> print var
w varName --> add watch
i b --> info on breakpoints
```
