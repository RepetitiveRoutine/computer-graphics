SOURCE FILES:

    Main.cpp
        The method with 90% of the functionality
        
    Main.h 
        Contains a bunch of stuff main.cpp uses
    
    Buildings.h
        Contains a bunch of arrays for the main.cpp to use per frame


HOW TO PLAY THE GAME:
    The objective is
        1 Pick the flashlight up
        2 Exit through hallway, note the location of the exit door
        3 Walk to the server room, avoiding the enemy
        4 Press the green button at the back, avoid the enemy, then walk back to the exit door
          as it is now open.
        
        Notes:
            Be careful the server room is a dead end essentially so the enemy can get you. 
            The enemy can phase through walls
    
    How to lose:
        1 Let the enemy touch you
        
The game will restart after 10 seconds when you die, same for when you win.
    


HOW TO COMPILE:

    1 Cd into build
    2 cmake ..
    3 make 
    4 cd into bin/The Ward then run the executable 

Its basically the exact same as the tutorials.

    
