# basePKG
A packinging program for linix, you can install programs and create them. this dosent run on a server

# Preshutes
G++

# Installation
enter the cloned directory
# build and install
```
   ~ sh build.sh
   ~ sh setup.sh
   ============ BasePKG installer ============
   selecting bin directory!
   installing files!
   [Sudo] enter password: *****
   Install complete!
   
```
# Make a package
make a folder with a src, and bin directory
make a file in your folder call it config.cfg
base the config off of this:
```
    #compiler
    (A compile like g++) g++
    #args
    (PUT SOMTHING RANDOM HERE OR IT WONT WORK WITH THIS VERSION)
    #srcDir
    (the folder you called it)/src/*.with file extenion
    #outBin
    (The folder you called it)/bin/(WhatEverTheCommandPrefixIs)
    
```
# Install a package
Go outside the folder and enter this
```
  basePkg install (folder of package)
  (then enter your password)
```
