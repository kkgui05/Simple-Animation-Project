# Simple-Animation-Project
This is a C++ program that generates some elementary animations. 

How to use
Clone the repository or download the code file animation.cpp.
Compile the program using any C++ compiler
Run the program 
Enter the size of the animation (an odd number).
Enter the shape you want to generate:
1 for Square
2 for Triangle
3 for Pentagon
4 for Sentence
5 to Quit
Depending on the choice you make, the program generates the respective shape with a random ASCII character.
After the animation is complete, the program prompts you if you want to repeat or quit.

Features
Shapes

Square
The program creates a square with the random character entered by the user, and increments the square size by the length entered earlier. The animation is generated in the following way:
Clears the screen.
Creates a square with the random character and increments the square size by the length entered earlier.
Waits for one second.
Clears the screen.
Repeats the above steps until the square size is equal to the length entered by the user.

Triangle
The program creates a triangle with the random character entered by the user. The animation is generated in the following way:
Assigns the mid variable with the length entered by the user.
Clears the screen.
Adds spaces before the length of mid, then adds the random character and repeats the process reducing the spaces added by 1 on each iteration and increases the length of the random character by 2 until the triangle is complete.
Waits for one second.
Clears the screen.
Repeats the above steps until the triangle is complete.

Pentagon
The program creates a pentagon with the random character entered by the user. The animation is generated in the following way:
Clears the screen.
Creates the triangle using the method in the previous triangle case and collects the length of the base of the triangle.
Creates another triangle beneath the first one but with its top aligned with the left of the first triangle.
Repeats the above steps, creating another triangle to the right of the two triangles.

Sentence
The program creates a sentence with the random character entered by the user. The animation is generated in the following way:
Prompts the user to enter a sentence.
The sentence is then displayed on the screen, with each character being replaced by the random character entered by the user.
The random character for each character in the sentence changes after each repetition.
The program then prompts the user to edit the sentence, allowing the user to replace a character at a specified position.
The new sentence is then displayed on the screen with the random character replacing each character.
The program then prompts the user if they want to repeat or quit.

