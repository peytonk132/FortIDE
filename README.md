# FortIDE
This is a simple Fortran-dedicated IDE im making. This is the Reddit post kind of describing the things I want to do and a run down of who I am: https://www.reddit.com/r/AskProgramming/comments/1c0bat6/making_a_simple_ide_for_fortran

# whoami

  My name is Peyton but my online name is The Irish Dev. I'm a tennage programmer living in the backwoods of Pennsylvania who has a computer and dream. My end goal is to eventually work at rockstar someday and I also want to get my CS Degree. I programm primarily in C++ and (if it wasn't obvious) I'm trying to learn Fortran. I love history, firearms and related things, Computer Science, machine-shop work, and generally figuring out what makes things tick.

# "Why'd you do it Baby Billy"
  So this has greatly deviated from my original goal. Basically, I had gone through the area of learning where you think you know enough to take on a large scale project and then realize you don't know a damn thing worth the project. Yeah, that was me. So, what happened was, me and friend in my 5th pd. Physics class were arguing about what the best programming language is (Plot twist: there isn't), C/C++ or Python (Which is ironic becuase Python derives from C). My physics teacher had chimed in saying that we were both wrong and that Fortran was beter than both in terms of speed, readability, and slightly in functionality. My friend and I had dropped the argument after that and later on I had asked my teacher what Fortran was. He gave me an extremely brief intro to it and I had gotten curious and researched it myself. Obviously I was immediately disgusted by the syntax of the language but it wasn't long be fore I started to warm up to it.
  I had then gotten a want to do some serious learning about it. There was a big issue though, how the hell do I do that? I didn't find extremely good documentation on the language and I was hoping to find a Visual Studio like IDE. I searched far and wide but couldn't find anything. I first came upon Code::Blocks but that felt too overtly complicated and I generally didn't like the look and feel of it. 
    Then I came upon the gfortran compiler but I realized I didn't know a damn thing about using a Cli compiler although I've gotten better since then. After that I wanted to see if it was possible to use VS2022 for writing Fortran. After doing some quick searching I foun the Intel Fortran Compiler that can integrate with Visual Studio to write Fortran. A slight issue is though, my laptop is shite. I'm running a 4 core, Intel Core-i5 1Ghz processor with an awful amount of storage runnning Windows 11. The integration took near all day and my CPU peaked at around 120°F and took up an insane amount of space on my laptop.
    Because I was raised by an engineer, the same man who got me into machine-shop work, I decided to make the IDE myself so it can be taylored to what I think is good as well as the community because I VALUE YOUR OPINION AND LISTEN TO YOU. I as well realized that this was a good oppurtunity to make a large scale project for the first time.

# The Goal
The goal is to make a light-weight, easy-on-the-eyes, simple and easy to use IDE. I want to to be a be easy to install and leave a small footprint on the computer.

# The libraies I used are:
* SFML
* ImGui
* SFML-ImGui backend
* Native File Dialog (NFD)
* Boost
* FPM

# How To Basic
These are just the beginning steps to creating a project and using it in the IDE.

1. Open the IDE to find youself in the start menu. You will be given the options for creating a Project or opening an existing one.
2. If you don't know of a project that has been created yet then create a new one, a popup will appear asking where ot create it and what to name it. After this close out of the popup.
3. Hit the 'x' button located at the top right corner. This will then open up to the IDE itself.
4. You should find a list of packages that are given from ```fpm-search``` and lists the creators, license, repos and .toml line.
5. At the bottom you will find the settings options so you can customize the build, run, and test commands.

If you have anything you want to tell me, good or bad, please email me at peytonk1945@gmail.com because I constantly check my email. Thanks again and I hope you enjoy the program.
