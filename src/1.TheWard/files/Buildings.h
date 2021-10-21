// AUTHOR - MAX BARKER
// SID - 19624729

// Walls
const int NUM_WALLS = 46;
// Flashlight
const int FLASHLIGHT_VECS = 3;
// Server vars
const int NUM_SERVERS = 4;
const int SERVER_VECS = 5;
// Lights
const int NUM_LIGHTS = 5;
// Starting room
const int OFFICE_WALLS = 5;
const int TABLE_VECS = 5;
const int COMPUTER_VECS = 7;

struct Buildings
{
    glm::vec3 translate;
    glm::vec3 scale;
    glm::vec2 shift;
};


extern Buildings builder[NUM_WALLS] =
{   //LARGE WALL +//FIRST HALLWAY
    { glm::vec3(12.5f,0.75f,55.0f),  glm::vec3(15.0f,1.5f,0.01f), glm::vec2(15.0f,1.0f) },
    { glm::vec3(13.75f,0.75f,52.5f), glm::vec3(12.5f,1.5f,0.01f), glm::vec2(12.5f,1.0f) },
    { glm::vec3(5.625f,0.75f,52.5f), glm::vec3(1.25f,1.5f,0.01f), glm::vec2(1.25f,1.0f) },
    { glm::vec3(5.0f,0.75f,53.75f),  glm::vec3(0.01f,1.5f,2.5f),  glm::vec2(2.5f,1.0f)  },
    { glm::vec3(23.75f,0.75f,57.5f), glm::vec3(7.5f,1.5f,0.01f),  glm::vec2(7.5f,1.0f)  },

    //FIRST ROOM NUM_WALLS
    { glm::vec3(27.5f,0.75f,51.25f), glm::vec3(0.01f,1.5f,12.5f), glm::vec2(12.5f,1.0f)},
    { glm::vec3(20.0f,0.75f,48.75f), glm::vec3(0.01f,1.5f,7.5f),  glm::vec2(7.5f,1.0f) }, //WALL LEFT
    { glm::vec3(21.25f,0.75f,45.0f), glm::vec3(2.5f,1.5f,0.01f),  glm::vec2(2.5f,1.0f) }, //SMALL DOOR LEFT
    { glm::vec3(26.25f,0.75f,45.0f), glm::vec3(2.5f,1.5f,0.01f),  glm::vec2(2.5f,1.0f) }, //SMALL DOOR RIGHT
    { glm::vec3(20.0f,0.75f,56.25f), glm::vec3(0.01f,1.5f,2.5f),  glm::vec2(2.5,1.0f)  },  //SMALL WALL TOP

    //EXIT TO ROOM HALLWAY
    { glm::vec3(25.0f,0.75f,42.5f),  glm::vec3(0.01f,1.5f,5.0f),  glm::vec2(5.0f,1.0f) }, //HALLWAY RIGHT
    { glm::vec3(22.5f,0.75f,42.5f),  glm::vec3(0.01f,1.5f,5.0f),  glm::vec2(5.0f,1.0f) }, //HALLWAY LEFT

    //BIG ROOM
    { glm::vec3(27.5f,0.75f,36.25f), glm::vec3(0.01f,1.5f,7.5f),  glm::vec2(7.5f,1.0f) },
    { glm::vec3(20.0f,0.75f,32.5f),  glm::vec3(15.0f,1.5f,0.01f), glm::vec2(15.0f,1.0f)},
    { glm::vec3(12.5f,0.75f,34.375f),glm::vec3(0.01f,1.5f,3.75f), glm::vec2(3.75f,1.0f)},
    { glm::vec3(17.5f,0.75f,40.0f),  glm::vec3(10.0f,1.5f,0.01f), glm::vec2(10.0f,1.0f)},
    { glm::vec3(26.25f,0.75f,40.0f), glm::vec3(2.5f,1.5f,0.01f),  glm::vec2(2.5f,1.0f) },
    { glm::vec3(12.5f,0.75f,39.375f),glm::vec3(0.01f,1.5f,1.25f), glm::vec2(1.25f,1.0f)},

    //hallway network
    { glm::vec3(8.75f,0.75f,38.75f), glm::vec3(7.5f,1.5f,0.01f),  glm::vec2(7.5f,1.0f) },
    { glm::vec3(5.0f,0.75f,33.75f),  glm::vec3(0.01f,1.5f,10.0f), glm::vec2(10.0f,1.0f)},
    { glm::vec3(10.0f,0.75f,28.75f), glm::vec3(10.0f,1.5f,0.01f), glm::vec2(10.0f,1.0f)},
    { glm::vec3(15.0f,0.75f,22.5f),  glm::vec3(0.01f,1.5f,12.5f), glm::vec2(12.5f,1.0f)},
    { glm::vec3(21.25f,0.75f,16.25f),glm::vec3(12.5f,1.5f,0.01f), glm::vec2(12.5f,1.0f)},
    { glm::vec3(27.5f,0.75f,20.0f),  glm::vec3(0.01f,1.5f,7.5f),  glm::vec2(7.5f,1.0f)},
    //INSIDE NUM_WALLS
    { glm::vec3(10.0f,0.75f,36.25f), glm::vec3(5.0f,1.5f,0.01f),  glm::vec2(5.0f,1.0f)},
    { glm::vec3(7.5,0.75f,33.75f),   glm::vec3(0.01f,1.5f,5.0f),  glm::vec2(5.0f,1.0f)},
    { glm::vec3(5.0f,0.75f,33.75f),  glm::vec3(0.01f,1.5f,10.0f), glm::vec2(10.0f,1.0f)},
    { glm::vec3(12.5f,0.75f,31.25f), glm::vec3(10.0f,1.5f,0.01f), glm::vec2(10.0f,1.0f)},
    { glm::vec3(17.5f,0.75f,30.0f),  glm::vec3(0.01f,1.5f,2.5f),  glm::vec2(2.5f,1.0f)},
    { glm::vec3(21.25f,0.75f,18.75f),glm::vec3(7.5f,1.5f,0.01f),  glm::vec2(7.5f,1.0f)},
    { glm::vec3(25.0f,0.75f,20.0f),  glm::vec3(0.01f,1.5f,2.5f),  glm::vec2(2.5f,1.0f)},
    { glm::vec3(17.5f,0.75f,20.0f),  glm::vec3(0.01f,1.5f,2.5f),  glm::vec2(2.5f,1.0f)},
    { glm::vec3(26.25f,0.75f,23.75f),glm::vec3(2.5f,1.5f,0.01f),  glm::vec2(2.5f,1.0f)},
    { glm::vec3(25.0f,0.75f,27.5f),  glm::vec3(0.01f,1.5f,7.5f),  glm::vec2(7.5f,1.0f)},
    { glm::vec3(21.25f,0.75f,31.25f),glm::vec3(7.5f,1.5f,0.01f),  glm::vec2(7.5f,1.0f)},
    { glm::vec3(17.5f,0.20f,25.0f),  glm::vec3(0.01f,0.4f,7.5f),  glm::vec2(7.5f,1.0f)}, //WINDOW FRAME BOTTOM
    { glm::vec3(17.5f,1.4f,25.0f),   glm::vec3(0.01f,0.2f,7.5f),  glm::vec2(7.5f,1.0f)}  //WINDOW FRAME TOP
};



Buildings startingRoom[OFFICE_WALLS]
{
    {glm::vec3(5.625f,0.75f,52.49f), glm::vec3(1.25f,1.5f,0.01f), glm::vec2(1.25f,1.0f) }, //RIGHT INNER PANEL
    {glm::vec3(5.625f+2.5f,0.75f,52.49f), glm::vec3(1.25f,1.5f,0.01f), glm::vec2(1.25f,1.0f) }, //LEFT INNER PANEL
    {glm::vec3(5.0f,0.75f,50.625f), glm::vec3(0.01f,1.5f,3.75f), glm::vec2(3.75f,1.0f) }, //LEFT WALL
    {glm::vec3(8.75f,0.75f,50.625f), glm::vec3(0.01f,1.5f,3.75f), glm::vec2(3.75f,1.0f) }, // RIGHT WALL
    {glm::vec3(6.875f,0.75f,48.75f), glm::vec3(3.75f,1.5f,0.01f), glm::vec2(3.75f,1.0f) } //BACK WALL
};

Buildings table[TABLE_VECS]
{
    //TABLE TOP
    { glm::vec3(8.7f,0.25f,54.5f-4.5f), glm::vec3(0.05f,0.5f,0.05f), glm::vec2(1.25f,0.25f) },
    //LEGS
    { glm::vec3(8.7f,0.25f,54.5f-5.65f), glm::vec3(0.05f,0.5f,0.05f), glm::vec2(1.25f,0.25f)},
    { glm::vec3(8.7f-0.5f,0.25f,54.5f-4.5f), glm::vec3(0.05f,0.5f,0.05f), glm::vec2(1.25f,0.25f) },
    { glm::vec3(8.7f-0.5f,0.25f,54.5f-5.65f), glm::vec3(0.05f,0.5f,0.05f), glm::vec2(1.25f,0.25f)},
    { glm::vec3(8.45f,0.50f,49.43f), glm::vec3(0.7f,0.05f,1.3f), glm::vec2(1.25f,0.25f)}
};

Buildings computer[COMPUTER_VECS]
{
    {glm::vec3(8.45f,0.55f,49.43f), glm::vec3(0.5f,0.1f,0.5f), glm::vec2(1.0f,1.0f)}, //BASEPLATE
    {glm::vec3(8.45f,0.6f,49.43f), glm::vec3(0.25f,0.05f,0.25f), glm::vec2(1.0f,1.0f)}, //BOTTOM PC
    {glm::vec3(8.45f,0.7f,49.30f), glm::vec3(0.25f,0.25f,0.02f), glm::vec2(1.0f,1.0f)}, //LEFT PC
    {glm::vec3(8.45f,0.7f,49.56f), glm::vec3(0.25f,0.25f,0.02f), glm::vec2(1.0f,1.0f)}, //RIGHT PC
    {glm::vec3(8.45f,0.815f,49.43f), glm::vec3(0.25f,0.02f,0.25f), glm::vec2(1.0f,1.0f)}, //TOP PC
    {glm::vec3(8.45f,0.7f,49.43f), glm::vec3(0.2f,0.22f,0.25f), glm::vec2(1.0f,1.0f)} //IMAGE
};

Buildings flashlight[FLASHLIGHT_VECS]
{
    { glm::vec3(5.45f, 0.025f, 52.0f),           glm::vec3(0.15f,0.05f,0.05f), glm::vec2(1.25f,0.25f)  },
    { glm::vec3(0.1f + 5.45f, 0.025f, 52.0f),   glm::vec3(0.05f,0.08f,0.08f), glm::vec2(1.25f,0.25f)  },
    { glm::vec3(0.130f +5.45f, 0.025f, 52.0f),  glm::vec3(0.01f,0.078f,0.078f), glm::vec2(1.25f,0.25f)  }
};

Buildings heldFlashlightPositions[FLASHLIGHT_VECS]
{
    { glm::vec3(0.45f,           -0.2f,   -0.25f), },
    { glm::vec3(0.1f + 0.45f,    -0.2f,   -0.25f), },
    { glm::vec3(0.105f + 0.47f,  -0.2f,   -0.25f), }
};

Buildings exitDoor[]
{
    { glm::vec3(3.0f+22.75f, 0.625f, 57.5f), glm::vec3(1.20f,1.25f,0.1f), glm::vec2(1.0f,1.0f) },//DOOR
    { glm::vec3(3.61f+22.75f, 0.61f, 57.5f), glm::vec3(0.05f,1.25f,0.2f), glm::vec2(1.0f,1.0f) },//FRAME LEFT
    { glm::vec3(2.39f+22.75f, 0.61f, 57.5f), glm::vec3(0.05f,1.25f,0.2f), glm::vec2(1.0f,1.0f) },//FRAME RIGHT
    { glm::vec3(3.0f+22.75f, 1.26f, 57.5f),  glm::vec3(1.27f,0.05f,0.2f), glm::vec2(1.0f,1.0f) } //FRAME TOP
};

Buildings originalServers[NUM_SERVERS][SERVER_VECS]
{
    {
        { glm::vec3(21.25f, 0.65f, 28.75f), glm::vec3(4.5f, 1.25f, 0.25f) },
        { glm::vec3(19.0f, 0.65f, 28.75f),  glm::vec3(0.25f, 1.25f, 0.5f) },
        { glm::vec3(23.5f, 0.65f, 28.75f),  glm::vec3(0.25f, 1.25f, 0.5f) },
        { glm::vec3(21.25f, 1.25f, 28.75f), glm::vec3(4.75f, 0.125f, 0.5f)},
        { glm::vec3(21.25f, 0.05f, 28.75f), glm::vec3(4.75f, 0.125f, 0.5f)}
    },
    {
        { glm::vec3(21.25f, 0.65f, 26.25f), glm::vec3(4.5f, 1.25f, 0.25f) },
        { glm::vec3(19.0f, 0.65f, 26.25f),  glm::vec3(0.25f, 1.25f, 0.5f) },
        { glm::vec3(23.5f, 0.65f, 26.25f),  glm::vec3(0.25f, 1.25f, 0.5f) },
        { glm::vec3(21.25f, 1.25f, 26.25f), glm::vec3(4.75f, 0.125f, 0.5f)},
        { glm::vec3(21.25f, 0.05f, 26.25f), glm::vec3(4.75f, 0.125f, 0.5f)}
    },
    {
        { glm::vec3(21.25f, 0.65f, 23.75f), glm::vec3(4.5f, 1.25f, 0.25f) },
        { glm::vec3(19.0f, 0.65f, 23.75f),  glm::vec3(0.25f, 1.25f, 0.5f) },
        { glm::vec3(23.5f, 0.65f, 23.75f),  glm::vec3(0.25f, 1.25f, 0.5f) },
        { glm::vec3(21.25f, 1.25f, 23.75f), glm::vec3(4.75f, 0.125f, 0.5f)},
        { glm::vec3(21.25f, 0.05f, 23.75f), glm::vec3(4.75f, 0.125f, 0.5f)}
    },
    {
        {glm::vec3(21.25f, 0.65f, 21.25f), glm::vec3(4.5f, 1.25f, 0.25f)},
        {glm::vec3(19.0f, 0.65f, 21.25f), glm::vec3(0.25f, 1.25f, 0.5f)},
        {glm::vec3(23.5f, 0.65f, 21.25f), glm::vec3(0.25f, 1.25f, 0.5f)},
        {glm::vec3(21.25f, 1.25f, 21.25f), glm::vec3(4.75f, 0.125f, 0.5f)},
        {glm::vec3(21.25f, 0.05f, 21.25f), glm::vec3(4.75f, 0.125f, 0.5f)}
    }
};

Buildings enemy[4][2]
{
    {  glm::vec3(0.0f, -0.05f, 0.0f) ,glm::vec3(0.5f,0.5f,0.5f)}   ,
    { glm::vec3(0.0f, -0.5f, 0.0f), glm::vec3(0.1f,1.0f,0.1f)},
    { glm::vec3(0.0f, -0.95f, 0.0f), glm::vec3(1.0f,0.1f,0.1f)},
    { glm::vec3(0.0f, -0.95f, 0.0f), glm::vec3(1.0f,0.1f,0.1f)}
};
