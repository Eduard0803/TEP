IDENTIFICATION DIVISION.
PROGRAM-ID. 'HelloWorld'.
AUTHOR. "@eduard0803".

DATA DIVISION.
WORKING-STORAGE SECTION.
01 first_number PIC 9(5).
01 second_number PIC 9(5).
01 result PIC 9(5).

PROCEDURE DIVISION.
    DISPLAY 'Enter with the first number: ' NO ADVANCING.
    ACCEPT first_number.

    DISPLAY 'Enter with the second number: ' NO ADVANCING.
    ACCEPT second_number.
    
    ADD first_number TO second_number GIVING result.
    DISPLAY 'SUM = ' result.

    STOP RUN.
