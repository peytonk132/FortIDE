#!/bin/sh
var1= cd build
var2= ninja -f build-Debug.ninja -j8
var3= cd ../
var4= ./run.sh
echo $var1
echo $var2
echo $var3
echo $var4
