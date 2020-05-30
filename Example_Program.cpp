// Includes Required Libarys
#include <MsgBoxHandler.h> // This is a DLL file
#include <iostream> // The next to libarys (lib(s)) are things for logging and CPU threads
#include <thread> // this is used a wait function in this program but it has more than code for a wait function

#define wait(seconds) std::this_thread::sleep_for(seconds) // this is a define used for making code easier to read in the main code

using namespace std::literals::chrono_literals; // this is the same thing as i said above on line 6 /\

int main() { // The main function for the program that starts the program
	MsgBoxHandler dialog = MsgBoxHandler(NULL); // Creating a Object for the DLL Lib
	dialog.InfoDialog("Info", "Hello, World!", OK); // Create a Dialog with a title of "Info" and a body of "Hello, World!" and a OK button
	if (dialog.QuestionDialog("Asking...", "Do You Want to do Something", YES_NO) == IS_YES_PRESSED) { // another example of a dialog use but this time it has multable buttons and this can be used to do conditions if one button is pressed and not the other
		std::cout << "ok :D" << std::endl << std::endl; // the dialog is created with the title of "Asking..." and the body of "Do You Want to do Something" that has 2 buttons a YES and a NO button. the line of cose this commit is on prints somethig on the screen
		wait(5s); // remember the commit that makes it easier this is what its for so i don't have to write "std::this_thread::sleep_for(5s)" every time
		std::cout << "201 + 750 = "; // this is the problom
		int answer; // a container for the users answer
		std::cin >> answer; // gets the answer
		std::cout << std::endl; // print a new line
		if (answer == (201 + 750)) { // checks the answer is correct or not
			dialog.WarningDialog("YAAAAAAAAAAAAAAY", "You got it", OK); // if correct the you win
		} else {
			dialog.WarningDialog("SOOOO CLOSE!", "Not quite Try again :)", OK); // if not correct the lose
		}
	} else {
		dialog.ErrorDialog("What :(", "Ok I under stand :'(", OK); // this happens if the user clicks the NO button
	}

	wait(1s); // waits 1 second

	std::cout << "Press Enter to Continue..." << std::endl; // printing text to the screen
	std::cin.get(); // waits for the user to press enter on the keyboard

	dialog.~MsgBoxHandler(); // not required at this point but it clears memory in the computer usedin big programs
} // the end of the program