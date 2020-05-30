Hello this is the instructions to setup and use this library

Setup:
Note: these instructions are for Visual Studio

DLL lib:
1. Go into the DLL Folder and copy the Header files (.h) and move them into the project you want and paste the .h files into the same folder as the main .cpp file that has the main function init.

2. In the project directory create a floder called "libs" this is where you will put the MsgBoxHandler.lib file.

3. Open your project go to Solution Explorer and select your project and open the property dialog or press ALT + ENTER. once your in there you go to Linker > Input, you need to add somthing to Additional Dependencies and add the lib file by typeing "$(ProjectDir)libs\MsgBoxHandler.lib"

4. Copy all the example code in the same folder that this readme file is and paste it in your main .cpp file and compile by pressing F5 on the keyboard.

5. go to the DLL folder and copy MsgBoxHandler.dll then go to where the .exe file is located in the solution and paste the MsgBoxHandler.dll in the same directory as the .exe file is. if you don't know where the compiled .exe file is go to your projects property dialog and go to general > output directory.

thats it now run the program by pressing F5 and it will work

Static lib:
1. go into the StaticLib folder and copy the Header file (.h) and paste it in the same folder as the main .cpp file that has the main function

2. In the project directory create a floder called "libs" this is where you will put the MsgBoxHandler_s.lib file.

3. Open your project go to Solution Explorer and select your project and open the property dialog or press ALT + ENTER. once your in there you go to Linker > Input, you need to add somthing to Additional Dependencies and add the lib file by typeing "$(ProjectDir)libs\MsgBoxHandler_s.lib"

4.  4. Copy all the example code in the same folder that this readme file is and paste it in your main .cpp file. you need to change one line of code, go to line 2 the line of code should look like this:
#include <MsgBoxHandler.h> you nee to change the line of code so it looks like this: #include <MsgBoxHandler_s.h>

thats it now run the program by pressing F5 and it will work