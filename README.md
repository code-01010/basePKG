# basePKG
A packinging program for linix, you can install programs and create them. this dosent run on a server there will be a futre repo update uising git or curl or wget

# Preshutes
G++ (if your using repo mode you need git to)

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
    (Put args if u have none type this "Cmd, self:skip")
    #srcDir
    (the folder you called it)/src/*.with file extenion
    #outBin
    (The folder you called it)/bin/(WhatEverTheCommandPrefixIs)
    
```
# Install a package
Go outside the folder and enter this
```
  basePkg (folder of package)
  (then enter your password)
```
# Install a package from a repo
```
    basePkg-fetch -getrepo (Git repo http url)
```
After that, that repo is installed, if it is configured with base! To test
```
    basePkg-fetch -getrepo https://github.com/code-01010/BasePkgTestRepo
```
