# simple-calculator-in-c
The program prompts the user to enter two numbers and an operator (+, -, *, /) in between. It then performs the corresponding arithmetic operation and displays the result

To make the program more robust, we added additional error checking and handling. Specifically, we check if the operator entered is supported and if the denominator is zero for division operation. If an error is detected, we prompt the user to enter a valid input.
![error](https://user-images.githubusercontent.com/116286199/231975248-1b0a3f0a-2281-4857-884e-c99444dd59d5.png)

Additionally, we added a loop to the program that allows the user to continue using the calculator or exit the program. After displaying the result, the program prompts the user to enter 'Y' or 'N' to continue or exit, respectively.
![erro2](https://user-images.githubusercontent.com/116286199/231975860-d2ffc059-227b-431f-819d-9852d9bd2842.png)

## Usage

### To use the calculator, follow these steps:

    Open the command line or terminal.
    Navigate to the directory containing the program files.
    Compile the program by entering the following command: 'gcc calculator.c -o calculator'
    Run the program by entering the following command: './calculator'
    Follow the on-screen instructions to enter two numbers and an operator.

The program will then perform the arithmetic operation and display the result. If an error is detected (e.g. invalid operator or division by zero), the program will prompt the user to enter a valid input. After displaying the result, the program will prompt the user to enter 'Y' or 'N' to continue or exit, respectively.

## Contributing

If you would like to contribute to this project, feel free to submit a pull request or open an issue on GitHub. We welcome any and all feedback and contributions.

## Acknowledgments
This program was created as a learning exercise for C programming.
