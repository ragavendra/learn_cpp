# vim-cmake-boilerplate

### Instructions
Follow below to setup the `env`
The companion repository for the [**Vim: Setting up a Build System and Code Completion for C and C++**](https://dane-bulat.medium.com/vim-setting-up-a-build-system-and-code-completion-for-c-and-c-eb263c0a19a1) guide.

### Build steps
a. `Ctrl + M` and `M` invokes `:Copen`
b. `Ctrl + M` and `bd` builds the `Debug`
c. `Ctrl + M` and `br` builds the `Release`

### Run program
a. Do `:call SetBinaryDebug("Boilerplate")` and `F6` will run exe from the `Debug`
a. Do `:call SetBinaryRelease("Boilerplate")` and `F7` will run exe from the `Debug`
