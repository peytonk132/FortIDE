# FortIDE
This is a simple Fortran-dedicated IDE im making. This is the Reddit post kind of describing the things I want to do and a run down of who I am: https://www.reddit.com/r/AskProgramming/comments/1c0bat6/making_a_simple_ide_for_fortran

Hello every one. This is the official release of FortIDE, my very own open-source, light-weight(~50 MB) program to create an run Fortran. So, a little about my self. My name is Peyton. I'm a 16 year old from the backwoods of Pennsylvania. Computer Science has always had a place in my heart since I started highschool. My love for tech originally came from trying to "jailbreak" my school laptop, no I didn't get caught. 
Ok, so onto the IDE. So when you start the IDE, it will take you to a project creation screen where it's pretty barren. The way to create a project is to type in the name of your project and then click the "New Project" button to select the folder to create that in. After that (if you have Fortran Package Manager installed properly along with gfortran installed properly) that should create a new project, complete with a src, test, app, and .git folder along with an fpm.toml file as this uses FPM to create the packages. From there you will find the file-tree that you can use to navigate your project. It's honestly not the greatest and still has a lot of work to be done, but this is my first big project and i'm really proud of what i've made. And aswell, like a good many self-taught programmers I had the help of ChatGPT to at least get the ball rolling when it came to creating certain functions or explaining stuff.

The libraies I used are:
SFML
ImGui
SFML-ImGui backend
Native File Dialog (NFD)
Boost
FPM

If you have anything you want to tell me, good or bad, please email me at peytonk1945@gmail.com because I constantly check my email. Thanks again and I hope you enjoy the program.
