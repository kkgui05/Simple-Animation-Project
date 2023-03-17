/*
	Description: This is a C++ program that generates some elementary animations.
*/
 
#include <iostream>
#include <ctime>
#include <unistd.h>
using namespace std;

int main()
{
	//declares shapes enumeration
	enum Shapes{Square = 1, Triangle = 2, Pentagon = 3, Sentence = 4, Quit = 5};
	
	//declares variables 
	Shapes my_shape;
	int length;
	int choice;
	int mid;
	int maxIndex;
	int maxIndex2;
	int r = 0;
	char repeat;
	char random;
	string sentence;
	string editSentence;
	bool isodd = false;
	bool toRepeat = true;
	bool restart = false;
	bool endSentence = false;

	//prompts user to enter size and reads in length
	cout << "Enter size: ";
	cin >> length;
	
	//checks to see if length is an odd number 
	while(!isodd)
	{
		if(length%2==0)
		{
			cout << "You must enter an odd number." << endl;
			cout << "Enter size: ";
			cin >> length;
		}
		else
		{
			isodd = true;

		}

	}
	
	//do-while loop to restart program if user chooses to repeat program
	do
	{
	
	//generates a seeded random number and assigns the number to the ASCII value of the charcter variable random 
	srand(time(NULL));
	random = (rand() % 32) + 33;

	//prompts user to enter a shape choice and converts the data type to the shapes in enumeration data type
	cout << "What shape do you want to generate: \n1.Square\n2.Triangle\n3.Pentagon\n4.Sentence\n5.Quit\n";
	cout << "Enter your choice: ";
	cin >> choice;
	my_shape = static_cast<Shapes>(choice);
	
	//starts a switch case for the choice entered in the previous step
	switch(my_shape)
		{
			//starts case for square
			case Square:
				//starts a loop which clears the screen and creates a square with the random character and increments the square size by the length entered earlier
				for (int k = 0; k <= length; ++k)
				{
					sleep(1);
					system("clear");
					for(int i = 1; i <= k; ++i)
					{
						for(int j = 1; j <= k; ++j)
						{
							cout << random;
						}
						cout << endl;
					}

				}

				//this asks the user if they want to repeat the program and if so, repeats it or ends the program. Otherwise, an incorrect choice message is prompted to the user
				do
				{
					cout << "Do you want to repeat? Y/N: ";
					cin >> repeat;
					if(toupper(repeat) == 'Y')
					{
						toRepeat = false;
						restart = true;
					}
					else if (toupper(repeat) == 'N')
					{
						toRepeat = false;
						restart  = false;
						break;
					}
					else
					{
						cout << "Incorrect choice, try again." << endl;
						toRepeat = true;
					}
				}while(toRepeat);
				break;

			//starts case for Triangle
			case Triangle:
					//this assigns the mid variable with length, clears the screen, and starts a loop that adds spaces before the length of mid, then adds the random character and repeats the process reducing the spaces added by 1 on each iteration and increases the length of the random character by 2 until the triangle is complete 
					mid = length;
					system("clear");
                                        for(int i = 1; i <= length; ++i)
					{
						sleep(1);
						for(int j = 0; j < (mid - i); ++j)
						{
							cout << " ";
						}
						
						for(int m = 1; m <= i; ++m)
						{
							cout << random;
						}
						
						for(int n = 1; n < i; ++n)
						{
							cout << random;
						}
						cout << endl;
					}
					
					//this asks the user if they want to repeat the program and if so, repeats it or ends the program. Otherwise, an incorrect choice message is prompted to the user
					do
                                	{
                                        	cout << "Do you want to repeat? Y/N: ";
                                        	cin >> repeat;
                                        	if(toupper(repeat) == 'Y')
                                        	{	
                                                	toRepeat = false;
                                                	restart = true;
                                        	}
                                        	else if (toupper(repeat) == 'N')
                                        	{
                                                	toRepeat = false;
                                                	restart  = false;
                                                	break;
                                        	}
                                        	else
                                        	{
                                                	cout << "Incorrect choice, try again." << endl;
							toRepeat = true;
                                        	}
                                        }while(toRepeat);
					break;
			
			//starts case for Pentagon
			case Pentagon:

				//clears the screen and creates the triangle using the method in the previous triangle case and collects the length of the base of the triangle 
				system("clear");
				for(int i = 1; i <= length; ++i)
                                {
           				sleep(1);
                                        for(int j = 0; j < (mid - i); ++j)
                                        {
                                        	cout << " ";
                                        }
                                                
					for(int m = 1; m <= i; ++m)
					{
                                                cout << random;
						maxIndex = m;
                                        }
                                                
					for(int n = 1; n < i; ++n)
                                        {
                                                cout << random;
						maxIndex2 = n;
                                        }
                                   	cout << endl;
                                }
				maxIndex = maxIndex + maxIndex2;

				//creates a square shape using the length of the base of the triangle made of the random character  
                                for(int i = 1; i <= (length-1); ++i)
                                {
					sleep(1);
                                        for(int j = 1; j <= maxIndex; ++j)
                                        {
						cout << random;
                                        }
                                        cout << endl;
                                }

				//this asks the user if they want to repeat the program and if so, repeats it or ends the program. Otherwise, an incorrect choice message is prompted to the user
				do
                                {
					cout << "Do you want to repeat? Y/N: ";
                                        cin >> repeat;
                                        if(toupper(repeat) == 'Y')
                                        {
						toRepeat = false;
                                                restart = true;
                                        }
                                        else if (toupper(repeat) == 'N')
                                        {
                                                toRepeat = false;
                                                restart  = false;
                                                break;
                                        }
                                        else
                                        {
						cout << "Incorrect choice, try again." << endl;
						toRepeat = true;
                                        }
                                        }while(toRepeat);
 					break;
			//starts case for Sentence
			case Sentence:
				
				//prompts the user to enter a sentence and stores it in sentence variable. this also assigns editSentence to sentence. 
			        cout << "Enter sentence: ";
				cin.ignore();
				getline(cin, sentence);
				editSentence = sentence;

				//this starts the while loop that clears the screen then displays the sentence and then removes a digit from the sentence. then the program moves the sentence to the next line and repeats the removal process and continues on repeating until there are no more digits, printing the final sentence without digits at the end. 
				while(endSentence == false)
				{
					sleep(1);
					system("clear");

                                	for(int q = 0; q < r; ++q)
                                	{
                 				cout << endl;
                                	}
					cout << editSentence << endl;

					for(int p = 0; p < editSentence.length(); ++p)
					{
						if(isdigit(editSentence.at(p)))
						{
							editSentence = editSentence.replace(p, 1, "");
							break;
						}
						if(p >= (editSentence.length()-1))
						{
							endSentence = true;
						}
					}
				++r;
				}

				endSentence = false;
				r = 0;

				//this asks the user if they want to repeat the program and if so, repeats it or ends the program. Otherwise, an incorrect choice message is prompted to the user
				do
                                {
					cout << "Do you want to repeat? Y/N: ";
                                        cin >> repeat;
                                        if(toupper(repeat) == 'Y')
                                        {
						toRepeat = false;
						restart = true;
                                        }
                                        else if (toupper(repeat) == 'N')
                                        {
                                                toRepeat = false;
                                                restart  = false;
                                                break;
                                        }
                                        else
                                        {
                                                cout << "Incorrect choice, try again." << endl;
						toRepeat = true;
                                        }
                                        }while(toRepeat);
					break;

			//starts case for Quit
			case Quit:
				
				//displays Game over message and ends the program
				cout << "Game over." << endl;
				restart = false;
		       	        break;	       
			
			//starts default case
			default:
				
				//displays an incorrect message if the user did not pick one of the shape options 
				cout << "Wrong choice, enter again." << endl;
				restart = true;


		}

	//checks to see if the user wants to repeat the program. 
	}while(restart == true);
	
	
	
	return 0;
}
