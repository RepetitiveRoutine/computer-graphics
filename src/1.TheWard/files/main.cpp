// AUTHOR - MAX BARKER
// SID - 19624729

#include "main.h"
#include "Buildings.h"

float vertices[] = {
        // positions          // normals           // texture coords
        -0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  0.0f,  0.0f,
        0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  1.0f,  0.0f,
        0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  1.0f,  1.0f,
        0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  1.0f,  1.0f,
        -0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  0.0f,  1.0f,
        -0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  0.0f,  0.0f,

        -0.5f,  0.5f,  0.5f, -1.0f,  0.0f,  0.0f,  0.0f,  1.0f,
        -0.5f,  0.5f, -0.5f, -1.0f,  0.0f,  0.0f,  1.0f,  1.0f,
        -0.5f, -0.5f, -0.5f, -1.0f,  0.0f,  0.0f,  1.0f,  0.0f,
        -0.5f, -0.5f, -0.5f, -1.0f,  0.0f,  0.0f,  1.0f,  0.0f,
        -0.5f, -0.5f,  0.5f, -1.0f,  0.0f,  0.0f,  0.0f,  0.0f,
        -0.5f,  0.5f,  0.5f, -1.0f,  0.0f,  0.0f,  0.0f,  1.0f,

        -0.5f, -0.5f,  0.5f,  0.0f,  0.0f,  1.0f,  0.0f,  0.0f,
        0.5f, -0.5f,  0.5f,  0.0f,  0.0f,  1.0f,  1.0f,  0.0f,
        0.5f,  0.5f,  0.5f,  0.0f,  0.0f,  1.0f,  1.0f,  1.0f,
        0.5f,  0.5f,  0.5f,  0.0f,  0.0f,  1.0f,  1.0f,  1.0f,
        -0.5f,  0.5f,  0.5f,  0.0f,  0.0f,  1.0f,  0.0f,  1.0f,
        -0.5f, -0.5f,  0.5f,  0.0f,  0.0f,  1.0f,  0.0f,  0.0f,

        -0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,  0.0f,  1.0f,
        0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,  1.0f,  1.0f,
        0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,  1.0f,  0.0f,
        0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,  1.0f,  0.0f,
        -0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,  0.0f,  0.0f,
        -0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,  0.0f,  1.0f,

        0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,  0.0f,  1.0f,
        0.5f,  0.5f, -0.5f,  1.0f,  0.0f,  0.0f,  1.0f,  1.0f,
        0.5f, -0.5f, -0.5f,  1.0f,  0.0f,  0.0f,  1.0f,  0.0f,
        0.5f, -0.5f, -0.5f,  1.0f,  0.0f,  0.0f,  1.0f,  0.0f,
        0.5f, -0.5f,  0.5f,  1.0f,  0.0f,  0.0f,  0.0f,  0.0f,
        0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,  0.0f,  1.0f,

        -0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,  0.0f,  1.0f,
        0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,  1.0f,  1.0f,
        0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,  1.0f,  0.0f,
        0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,  1.0f,  0.0f,
        -0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,  0.0f,  0.0f,
        -0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,  0.0f,  1.0f
};

// positions of the point lights
glm::vec3 lightPositions[] = {
        glm::vec3(23.75f, 1.5f, 53.75f),
        glm::vec3(23.75f, 1.5f, 48.75f),//23.75f, 1.5f, 36.25f
        glm::vec3(0.0f, 0.0f, 0.0f),
        glm::vec3(16.25f, 1.5f, 36.25f),
        glm::vec3(21.25f, 1.5f, 25.25f),
        glm::vec3(6.8f, 1.5f, 50.0f)
};

Buildings servers[NUM_SERVERS][SERVER_VECS];

int main()
{
    // GLFW Initialization and configuration
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Apple thingy not gonna remove it
    #ifdef __APPLE__
        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    #endif

    // Create the window ensuring no errors
    GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", NULL, NULL);
    if (window == NULL)
    {
        std::cout << "WINDOW CREATION FAILED" << std::endl;
        glfwTerminate();
        return -1;
    }

    // GLFW stuff
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
    //Mouse Movement
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);

    // Initialize GLAD
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    // Load in the fragment and vertex shaders
    Shader colorShader("color.vs","color.fs");
    Shader cubeShader("cube.vs", "cube.fs");

    // VBO and VAO for the cube
    unsigned int VBO, cubeVAO;
    glGenVertexArrays(1, &cubeVAO);
    glGenBuffers(1, &VBO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
    glBindVertexArray(cubeVAO);

    // Create the cube array
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(3 * sizeof(float)));
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(6 * sizeof(float)));
    glEnableVertexAttribArray(2);

    // Bind the light cube vao
    unsigned int lightCubeVAO;
    glGenVertexArrays(1, &lightCubeVAO);
    glBindVertexArray(lightCubeVAO);

    // Bind the VBO
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);

    // Load in all the texture files (Yes there are alot sorry)
    unsigned int tiles_diffuse = loadTexture(FileSystem::getPath("resources/textures/tiles_diffuse.png").c_str());
    unsigned int tiles_specular = loadTexture(FileSystem::getPath("resources/textures/tiles_specular.png").c_str());
    unsigned int walls_diffuseMap = loadTexture(FileSystem::getPath("resources/textures/wall_diffuse.png").c_str());
    unsigned int walls_specularMap = loadTexture(FileSystem::getPath("resources/textures/wall_specular.png").c_str());
    unsigned int face = loadTexture(FileSystem::getPath("resources/textures/face.png").c_str());
    unsigned int exit_door = loadTexture(FileSystem::getPath("resources/textures/exit_door.png").c_str());
    unsigned int metal_diffuse = loadTexture(FileSystem::getPath("resources/textures/metal_diffuse.png").c_str());
    unsigned int metal_specular = loadTexture(FileSystem::getPath("resources/textures/metal_specular.png").c_str());
    unsigned int exit_diffuse = loadTexture(FileSystem::getPath("resources/textures/exit_vertical.png").c_str());
    unsigned int exit_specular = loadTexture(FileSystem::getPath("resources/textures/exit_vertical_specular.png").c_str());
    unsigned int frame_diffuse = loadTexture(FileSystem::getPath("resources/textures/pika_frame.png").c_str());
    unsigned int frame_specular = loadTexture(FileSystem::getPath("resources/textures/frame_specular.png").c_str());
    unsigned int scary_frame = loadTexture(FileSystem::getPath("resources/textures/scary_frame.png").c_str());
    unsigned int server_glow = loadTexture(FileSystem::getPath("resources/textures/server_glow.png").c_str());
    unsigned int server_glow_red = loadTexture(FileSystem::getPath("resources/textures/server_glow_red.png").c_str());
    unsigned int white = loadTexture(FileSystem::getPath("resources/textures/white.png").c_str());
    unsigned int red = loadTexture(FileSystem::getPath("resources/textures/red.png").c_str());
    unsigned int green = loadTexture(FileSystem::getPath("resources/textures/green.png").c_str());
    unsigned int black = loadTexture(FileSystem::getPath("resources/textures/black.png").c_str());
    unsigned int pc_screen_on = loadTexture(FileSystem::getPath("resources/textures/pc_screen.png").c_str());
    unsigned int pc_screen_dead = loadTexture(FileSystem::getPath("resources/textures/pc_screen_dead.png").c_str());
    unsigned int wood = loadTexture(FileSystem::getPath("resources/textures/wood.jpg").c_str());
    unsigned int sky = loadTexture(FileSystem::getPath("resources/textures/night_sky.jpg").c_str());
    unsigned int win_screen =  loadTexture(FileSystem::getPath("resources/textures/win.png").c_str());
    unsigned int beige =  loadTexture(FileSystem::getPath("resources/textures/beige.jpg").c_str());



    colorShader.use();
    colorShader.setInt("material.diffuse", 0);
    colorShader.setInt("material.specular", 1);
    colorShader.setInt("material.glow", 2);

    startGame();

    glEnable(GL_DEPTH_TEST);
    glEnable(GL_AUTO_GENERATE_MIPMAP);



    while (!glfwWindowShouldClose(window))
    {

        // CAPTURE THE FRAMES
        float currentFrame = glfwGetTime();
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;
        camera.MovementSpeed = 3.5f;

        processInput(window);

        //Z BUFFER
        glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        //SET UP THE SHADER AND THE CAMERA VIEW
        colorShader.use();
        colorShader.setFloat("material.shininess", 32.0f);
        colorShader.setBool("blackout", BLACKOUT);


        /*  ██████╗  ██████╗ ██╗███╗   ██╗████████╗    ██╗     ██╗ ██████╗ ██╗  ██╗████████╗███████╗
            ██╔══██╗██╔═══██╗██║████╗  ██║╚══██╔══╝    ██║     ██║██╔════╝ ██║  ██║╚══██╔══╝██╔════╝
            ██████╔╝██║   ██║██║██╔██╗ ██║   ██║       ██║     ██║██║  ███╗███████║   ██║   ███████╗
            ██╔═══╝ ██║   ██║██║██║╚██╗██║   ██║       ██║     ██║██║   ██║██╔══██║   ██║   ╚════██║
            ██║     ╚██████╔╝██║██║ ╚████║   ██║       ███████╗██║╚██████╔╝██║  ██║   ██║   ███████║
            ╚═╝      ╚═════╝ ╚═╝╚═╝  ╚═══╝   ╚═╝       ╚══════╝╚═╝ ╚═════╝ ╚═╝  ╚═╝   ╚═╝   ╚══════╝  */

        for (int i = 0; i < NUM_LIGHTS; i++)
        {
            std::string pointLightString = ("pointLights[" + std::to_string(i) + "]");
            colorShader.setVec3(pointLightString + ".position", lightPositions[i]);
            //If i == 4, then make the light blue
            if (i == 4)
            {
                colorShader.setVec3(pointLightString + ".ambient", 0.3f, 0.3f, 0.7f);
                colorShader.setVec3(pointLightString + ".diffuse", 0.3f, 0.3f, 0.7f);
                colorShader.setVec3(pointLightString + ".specular", 0.3f, 0.3f, 0.7f);
            }
            //otherwise just a normal light color
            else {
                colorShader.setVec3(pointLightString + ".ambient", 0.05f, 0.05f, 0.05f);
                colorShader.setVec3(pointLightString + ".diffuse", 0.8f, 0.8f, 0.8f);
                colorShader.setVec3(pointLightString + ".specular", 1.0f, 1.0f, 1.0f);
            }
            //the floats below are consistent
            colorShader.setFloat(pointLightString + ".constant", 1.0f);
            colorShader.setFloat(pointLightString + ".linear", 0.35);
            colorShader.setFloat(pointLightString + ".quadratic", .44);
        }

        if(ROOMLIGHT)
        {
            colorShader.setVec3("pointLights[5].position", lightPositions[5]);
            colorShader.setVec3("pointLights[5].ambient", 0.05f, 0.05f, 0.05f);
            colorShader.setVec3("pointLights[5].diffuse", 0.8f, 0.8f, 0.8f);
            colorShader.setVec3("pointLights[5].specular", 1.0f, 1.0f, 1.0f);
            colorShader.setFloat("pointLights[5].constant", 1.0f);
            colorShader.setFloat("pointLights[5].linear", 0.35);
            colorShader.setFloat("pointLights[5].quadratic", .44);
        }
        else
        {
            colorShader.setVec3("pointLights[5].position", lightPositions[5]);
            colorShader.setVec3("pointLights[5].ambient", 0.0f, 0.0f, 0.0f);
            colorShader.setVec3("pointLights[5].diffuse",0.0f, 0.0f, 0.0f);
            colorShader.setVec3("pointLights[5].specular", 0.0f, 0.0f, 0.0f);
            colorShader.setFloat("pointLights[5].constant", 1.0f);
            colorShader.setFloat("pointLights[5].linear", 1.0f);
            colorShader.setFloat("pointLights[5].quadratic", 1.0f);
        }


        /*  ██╗     ██╗ ██████╗ ██╗  ██╗████████╗██╗███╗   ██╗ ██████╗
            ██║     ██║██╔════╝ ██║  ██║╚══██╔══╝██║████╗  ██║██╔════╝
            ██║     ██║██║  ███╗███████║   ██║   ██║██╔██╗ ██║██║  ███╗
            ██║     ██║██║   ██║██╔══██║   ██║   ██║██║╚██╗██║██║   ██║
            ███████╗██║╚██████╔╝██║  ██║   ██║   ██║██║ ╚████║╚██████╔╝
            ╚══════╝╚═╝ ╚═════╝ ╚═╝  ╚═╝   ╚═╝   ╚═╝╚═╝  ╚═══╝ ╚═════╝  */

        //Below is the spotlight lighting used from LearnOpenGL.com
        //The lightIntensity variables are global and are used to increase/decrease with key presses
        colorShader.setVec3("spotLight.ambient", lightIntensity, lightIntensity, lightIntensity);
        colorShader.setVec3("spotLight.diffuse", lightIntensity, lightIntensity, lightIntensity);
        colorShader.setVec3("spotLight.specular", lightIntensity, lightIntensity, lightIntensity);
        colorShader.setFloat("spotLight.constant", 1.0f);
        colorShader.setFloat("spotLight.linear", flashlightLinear);
        colorShader.setFloat("spotLight.quadratic", flashlightQuadratic);
        colorShader.setFloat("spotLight.cutOff", glm::cos(glm::radians(10.0f)));
        colorShader.setFloat("spotLight.outerCutOff", glm::cos(glm::radians(20.0f)));

        //If the flashlight is held, then the position of the lighting should be changed
        if(FLASHLIGHT_HELD)
        {
            colorShader.setVec3("spotLight.position", camera.Position);
            colorShader.setVec3("spotLight.direction", camera.Front);
        }
        //Else the light should point at the office wall
        else
        {
            colorShader.setVec3("spotLight.position", glm::vec3(5.45f, 0.0f, 52.0f));
            colorShader.setVec3("spotLight.direction", glm::vec3(1.0,  0.025, 0.0));
        }

        /* ######################## *
         *    Lighting Intensity    *
         * ######################## */

        //If <K> is pressed, then increase the intensity
        if(glfwGetKey(window, GLFW_KEY_K) == GLFW_PRESS)
        {
            flashlightLinear /= 0.99f;
            flashlightQuadratic /= 0.99f;
            lightIntensity -= 0.01;
        }
        //Otherwise if <L> is pressed, then decrease the intensity
        if(glfwGetKey(window, GLFW_KEY_L) == GLFW_PRESS)
        {
            flashlightLinear *= 0.99f;
            flashlightQuadratic *= 0.99f;
            lightIntensity += 0.01;
        }
        //SET THIS TO DEFAULT:
        colorShader.setBool("superbright", false);

        /* ######################## *
         *      TOGGLE LIGHTING     *
         * ######################## */

        // If the superbright is toggled, use the directional light from
        // LearnOpenGL to lighten the scene.
        if(SUPERBRIGHT)
        {
            colorShader.setBool("superbright", true);
            colorShader.setVec3("dirLight.direction", -0.2f, -1.0f, -0.3f);
            colorShader.setVec3("dirLight.ambient", 0.25f, 0.25f, 0.25f);
            colorShader.setVec3("dirLight.diffuse", 0.4f, 0.4f, 0.4f);
            colorShader.setVec3("dirLight.specular", 1.0f, 1.0f, 1.0f);
        }


        /* ######################## *
         *    VIEW AND PROJECTION   *
         * ######################## */

        // Create the projection mat4
        glm::mat4 projection;

        //Toggle between orthographic or perspective
        if(!TOGGLE_PERSPECTIVE)
        {
            projection = glm::perspective(glm::radians(camera.Zoom), (float)SCR_WIDTH / (float)SCR_HEIGHT, 0.1f, 100.0f);
        }
        else
        {
            projection = glm::ortho(-1.0f, 1.920f, -1.0f ,1.080f, 0.0f, 50.0f);
        }

        // If the player dies, animate their death for 10 seconds
        if(DEAD)
        {
            if(currentFrame < gameOverAnimate)
            {
                // Lock the camera
                camera.Front = glm::vec3(0.0f, 1.0f, 0.0f);
                camera.Position.y = 0.0f;
                camera.Yaw = -90.0f;
                camera.Pitch = 0.0f;
            }
            else
            {
                // Then restart the game
                startGame();
            }
        }
        // Likewise for if they win
        else if(G_OVER)
        {
            if(currentFrame < gameOverAnimate)
            {
                camera.Front = glm::vec3(0.0f, 0.0f, 1.0f);
                camera.Position = glm::vec3(0.0f,0.0f,-1.0f);
                camera.Yaw = -90.0f;
                camera.Pitch = 0.0f;
            }
            else
            {
                startGame();
            }
        }

        /* ######################## *
        *     INITIAL ANIMATION     *
        *  ######################## */


        if(currentFrame < 8.0f)
        {
            // Before 4 seconds the camera stares at the screen
            if(currentFrame < 4.0f)
            {
                camera.Front.x = 1.0f;
                camera.Front.z = 0.0f;
                camera.Position.x = 7.5f;
                camera.Position.z = 49.5f;
                // At 3 seconds turn the lights off
                if(currentFrame > 3.0f)
                {
                    ROOMLIGHT = false;
                }
            }
            // Then after 4 seconds, look at the doorway
            else if(currentFrame < 7.0f)
            {
                camera.Position.x = 7.5f;
                camera.Position.z = 49.5f;
                camera.Front.x -= 0.01f;
                camera.Front.z += 0.03f;
            }
            else
            {
                // Then release the mouse
                glm::vec3 front = glm::vec3(-3.0f, 0.0f, 12.0f);
                camera.Front = glm::normalize(front);
                glfwSetCursorPosCallback(window, mouse_callback);
            }
        }

        //Set the vectors onto the shader
        colorShader.setMat4("projection", projection);
        glm::mat4 view = camera.GetViewMatrix();
        colorShader.setVec3("viewPos", camera.Position);
        colorShader.setMat4("view", view);
        // CREATE THE WORLD MODEL
        glm::mat4 model = glm::mat4(1.0f);
        colorShader.setBool("emmit", false);


        /*  ███╗   ███╗ █████╗ ██╗███╗   ██╗     █████╗ ██████╗ ███████╗ █████╗
            ████╗ ████║██╔══██╗██║████╗  ██║    ██╔══██╗██╔══██╗██╔════╝██╔══██╗
            ██╔████╔██║███████║██║██╔██╗ ██║    ███████║██████╔╝█████╗  ███████║
            ██║╚██╔╝██║██╔══██║██║██║╚██╗██║    ██╔══██║██╔══██╗██╔══╝  ██╔══██║
            ██║ ╚═╝ ██║██║  ██║██║██║ ╚████║    ██║  ██║██║  ██║███████╗██║  ██║
            ╚═╝     ╚═╝╚═╝  ╚═╝╚═╝╚═╝  ╚═══╝    ╚═╝  ╚═╝╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝ */

        /* ######################## *
        *           FLOOR           *
        *  ######################## */
        bindTextures(tiles_diffuse, tiles_specular, NULL);
        glBindVertexArray(cubeVAO);
        //FLOOR
        model = glm::mat4(1.0f);
        colorShader.setFloat("material.shininess", 100.0f);
        colorShader.setBool("emmit", false);
        model = glm::translate(model, glm::vec3(20.0f,0.0f,37.0f));
        model = glm::scale(model, glm::vec3(30.0f,0.01f,50.0f));
        colorShader.setVec2("texShift", glm::vec2(30.0f,50.0f));
        colorShader.setMat4("model", model);
        glDrawArrays(GL_TRIANGLES, 0, 36);

        /* ######################## *
        *          CEILING          *
        *  ######################## */
        bindTextures(walls_diffuseMap, walls_specularMap, NULL);
        model = glm::mat4(1.0f);
        colorShader.setBool("emmit", false);
        model = glm::translate(model, glm::vec3(20.0f,1.5f,37.0f));
        model = glm::scale(model, glm::vec3(30.0f,0.01f,50.0f));
        colorShader.setVec2("texShift", glm::vec2(50.0f,30.0f));
        colorShader.setMat4("model", model);
        glDrawArrays(GL_TRIANGLES, 0, 36);


        /* ######################## *
        *       DRAW THE WALLS      *
        *  ######################## */
        bindTextures(walls_diffuseMap, walls_specularMap, NULL);
        for(int i =0; i < NUM_WALLS; i++)
        {
            colorShader.use();
            colorShader.setVec3("viewPos", camera.Position);
            colorShader.setFloat("material.shininess", 1080.0f);
            model = glm::mat4();
            colorShader.setVec2("texShift", builder[i].shift);
            model = glm::translate(model, builder[i].translate);
            model = glm::scale(model, builder[i].scale);
            colorShader.setMat4("model", model);
            glDrawArrays(GL_TRIANGLES, 0, 36);
        }


        /* ######################## *
        *      RENDER THE DOOR      *
        *  ######################## */
        bindTextures(exit_door, metal_specular, NULL);
        glBindVertexArray(cubeVAO);
        for(int i = 0; i < 4; i++)
        {
            switch(i)
            {
                case 0:
                    if(!BLACKOUT)
                    {
                        bindTextures(exit_door, metal_specular, NULL);
                    }
                    else
                    {
                        bindTextures(sky, sky, sky);
                    }
                    break;

                default:
                    bindTextures(tiles_diffuse, metal_specular, NULL);
                    break;
            }
            model = glm::mat4(1.0f);
            colorShader.setVec2("texShift", exitDoor[i].shift);
            model = glm::translate(model, exitDoor[i].translate);
            model = glm::scale(model, exitDoor[i].scale);
            colorShader.setMat4("model", model);
            glDrawArrays(GL_TRIANGLES, 0, 36);
        }

        //EXIT SIGN
        colorShader.use();
        bindTextures(exit_diffuse, exit_specular, exit_diffuse);
        glBindVertexArray(cubeVAO);
        model = glm::mat4(1.0f);
        colorShader.setVec2("texShift", glm::vec2(1.0f,1.0f));
        model = glm::translate(model, glm::vec3(2.20f+22.75f, 1.0f, 57.5f));
        model = glm::scale(model, glm::vec3(0.2f,0.35f,0.011f));
        colorShader.setBool("emmit", true);
        colorShader.setMat4("model",model);
        glDrawArrays(GL_TRIANGLES, 0, 36);
        glDisable(GL_TEXTURE_2D);
        colorShader.use();


     /* ███████╗███████╗██████╗ ██╗   ██╗███████╗██████╗     ██████╗  ██████╗  ██████╗ ███╗   ███╗
        ██╔════╝██╔════╝██╔══██╗██║   ██║██╔════╝██╔══██╗    ██╔══██╗██╔═══██╗██╔═══██╗████╗ ████║
        ███████╗█████╗  ██████╔╝██║   ██║█████╗  ██████╔╝    ██████╔╝██║   ██║██║   ██║██╔████╔██║
        ╚════██║██╔══╝  ██╔══██╗╚██╗ ██╔╝██╔══╝  ██╔══██╗    ██╔══██╗██║   ██║██║   ██║██║╚██╔╝██║
        ███████║███████╗██║  ██║ ╚████╔╝ ███████╗██║  ██║    ██║  ██║╚██████╔╝╚██████╔╝██║ ╚═╝ ██║
        ╚══════╝╚══════╝╚═╝  ╚═╝  ╚═══╝  ╚══════╝╚═╝  ╚═╝    ╚═╝  ╚═╝ ╚═════╝  ╚═════╝ ╚═╝     ╚═╝ */

        //Z move controls the position of each repeated server (4 total)

        /* ######################## *
        *     RENDER THE SERVERS    *
        *  ######################## */
        for(int i = 0; i < NUM_SERVERS; i++) {
            for (int j = 0; j < SERVER_VECS; j++)
            {
                glBindVertexArray(cubeVAO);
                if (j == 0) {
                    bindTextures(server_glow, server_glow, server_glow);
                    if(BLACKOUT) bindTextures(server_glow_red,server_glow_red,server_glow_red);
                    colorShader.setVec2("texShift", glm::vec2(5.0f, 1.0f));
                    colorShader.setBool("emmit", true);
                } else {
                    bindTextures(metal_diffuse, metal_specular, NULL);
                    colorShader.setVec2("texShift", glm::vec2(1.0f, 1.0f));
                    colorShader.setBool("emmit", false);
                }
                model = glm::mat4(1.0f);
                if(BLACKOUT && (glfwGetTime() < buttonAnimate + 2.0f))
                {
                    glm::vec3 translator = servers[i][j].translate;
                    if(i % 2 == 0){
                        translator.x *= 1.0002;
                    }
                    else{
                        translator.x /= 1.0002;
                    }
                    servers[i][j].translate = translator;
                    model = glm::translate(model, translator);
                    model = glm::scale(model, servers[i][j].scale);
                }
                else
                {
                    model = glm::translate(model,servers[i][j].translate);
                    model = glm::scale(model, servers[i][j].scale);
                }
                colorShader.setMat4("model", model);
                glDrawArrays(GL_TRIANGLES, 0, 36);
            }

        }
        colorShader.setBool("emmit", false);


        /* ######################## *
        *    RENDER THE BUTTON      *
        *  ######################## */
        // Frame
        glBindVertexArray(cubeVAO);
        bindTextures(metal_diffuse, metal_specular, NULL);
        model = glm::mat4(1.0f);
        colorShader.setVec2("texShift", glm::vec2(1.0f,1.0f));
        model = glm::translate(model, buttonFramePos);
        model = glm::scale(model, glm::vec3(0.05f,0.2f,0.2f));
        colorShader.setMat4("model", model);
        glDrawArrays(GL_TRIANGLES, 0, 36);

        // Button with pressing animation
        glBindVertexArray(cubeVAO);
        if(BLACKOUT)
        {
            bindTextures(red,red,red);
        }
        else
        {
            bindTextures(green, green, green);
        }
        model = glm::mat4(1.0f);
        colorShader.setBool("emmit", true);
        colorShader.setVec2("texShift", glm::vec2(1.0f,1.0f));
        //From the time the button was pressed, till 1 seconds later,
        // Do the following transformations
        if(BLACKOUT && (glfwGetTime() < buttonAnimate + 1.0f))
        {
            // Button pushed in
            if(currentFrame < buttonAnimate + 0.5f)
            {
                buttonPos.x /= 1.00003;
                model = glm::translate(model, buttonPos);
                model = glm::scale(model, glm::vec3(0.05f,0.125f,0.125f));
            }
            // Button comes back out
            else
            {
                buttonPos.x *= 1.00003;
                model = glm::translate(model, buttonPos);
                model = glm::scale(model, glm::vec3(0.05f,0.125f,0.125f));
            }
        }
        else
        {
            // Otherwise leave the button alone
            model = glm::translate(model, glm::vec3(17.57f, 0.5f,30.25f));
            model = glm::scale(model, glm::vec3(0.05f,0.125f,0.125f));
        }
        colorShader.setMat4("model", model);
        glDrawArrays(GL_TRIANGLES, 0, 36);


        /** ███████╗████████╗ █████╗ ██████╗ ████████╗    ██████╗  ██████╗  ██████╗ ███╗   ███╗
            ██╔════╝╚══██╔══╝██╔══██╗██╔══██╗╚══██╔══╝    ██╔══██╗██╔═══██╗██╔═══██╗████╗ ████║
            ███████╗   ██║   ███████║██████╔╝   ██║       ██████╔╝██║   ██║██║   ██║██╔████╔██║
            ╚════██║   ██║   ██╔══██║██╔══██╗   ██║       ██╔══██╗██║   ██║██║   ██║██║╚██╔╝██║
            ███████║   ██║   ██║  ██║██║  ██║   ██║       ██║  ██║╚██████╔╝╚██████╔╝██║ ╚═╝ ██║
            ╚══════╝   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝   ╚═╝       ╚═╝  ╚═╝ ╚═════╝  ╚═════╝ ╚═╝     ╚═╝ */

        /* ######################## *
        *      RENDER THE WALLS     *
        *  ######################## */
        bindTextures(walls_diffuseMap, walls_specularMap, NULL);
        for(int i =0; i < OFFICE_WALLS; i++)
        {
            colorShader.use();
            colorShader.setVec3("viewPos", camera.Position);
            colorShader.setFloat("material.shininess", 32.0f);
            model = glm::mat4();
            colorShader.setVec2("texShift", startingRoom[i].shift);
            model = glm::translate(model, startingRoom[i].translate);
            model = glm::scale(model, startingRoom[i].scale);
            colorShader.setMat4("model", model);
            glDrawArrays(GL_TRIANGLES, 0, 36);
        }

        /* ######################## *
        *    RENDER THE FLASHLIGHT  *
        *  ######################## */
        glBindVertexArray(cubeVAO);
        //Loop through the flashlight model array and build the model
        for(int i = 0; i < FLASHLIGHT_VECS; i++)
        {
            switch(i)
            {
                case 2:
                    // Front of the flashlight
                    bindTextures(white, white, white);
                    break;
                default:
                    // Handle
                    bindTextures(metal_diffuse,metal_specular,metal_specular);
                    break;
            }
            // The flashlight should emmit in the dark so it can be seen
            colorShader.setBool("emmit", true);
            colorShader.setFloat("material.shininess", 1.0f);
            colorShader.setVec2("texShift", glm::vec2(0.1f, 0.1f));
            model = glm::mat4();
            // If the flashlight is held, translate it to the player
            if(FLASHLIGHT_HELD)
            {
                // Translate flashlight to camera, rotate it based of pitch and yaw
                model = glm::translate(model, camera.Position);
                model = glm::rotate(model, glm::radians(-camera.Yaw), glm::vec3(0.0f, 1.0f, 0.0f));
                model = glm::rotate(model, glm::radians(camera.Pitch), glm::vec3(0.0f, 0.0f, 1.0f));
                model = glm::scale(model, glm::vec3(0.25f,0.25f,0.25f));
                model = glm::translate(model, heldFlashlightPositions[i].translate);
            }
            else
            {
                // Otherwise translate the flashlight to the floor
                model = glm::translate(model, flashlight[i].translate);
            }
            // Then scale it
            model = glm::scale(model, flashlight[i].scale);
            colorShader.setMat4("model", model);
            glDrawArrays(GL_TRIANGLES, 0, 36);
        }


        /* ######################## *
        *      RENDER THE TABLE     *
        *  ######################## */
        bindTextures(wood, wood, NULL);
        for(int i =0; i < TABLE_VECS; i++)
        {
            colorShader.use();
            colorShader.setVec3("viewPos", camera.Position);
            colorShader.setFloat("material.shininess", 32.0f);
            model = glm::mat4();
            colorShader.setVec2("texShift", table[i].shift);
            model = glm::translate(model, table[i].translate);
            model = glm::scale(model, table[i].scale);
            colorShader.setMat4("model", model);
            glDrawArrays(GL_TRIANGLES, 0, 36);
        }

        /* ######################## *
        *       RENDER THE PC       *
        *  ######################## */
        bindTextures(beige, beige, NULL);
        for(int i = 0; i < COMPUTER_VECS+5; i++)
        {
            if(i == 5)
            {
                colorShader.setBool("emmit", true);
                if(ROOMLIGHT)
                {
                    bindTextures(pc_screen_on, pc_screen_on, pc_screen_on);
                }
                else
                {
                    bindTextures(pc_screen_dead, pc_screen_dead, pc_screen_dead);
                }
            }
            colorShader.use();
            colorShader.setVec3("viewPos", camera.Position);
            colorShader.setFloat("material.shininess", 32.0f);
            model = glm::mat4();
            colorShader.setVec2("texShift", computer[i].shift);
            model = glm::translate(model, computer[i].translate);
            model = glm::scale(model, computer[i].scale);
            colorShader.setMat4("model", model);
            glDrawArrays(GL_TRIANGLES, 0, 36);
            colorShader.setBool("emmit", false);
        }

        /* ######################## *
        *      RENDER THE PHOTO     *
        *  ######################## */

        if(ROOMLIGHT)
        {
            bindTextures(frame_diffuse, frame_specular, NULL);
        }
        else
        {
            bindTextures(scary_frame, scary_frame, NULL);
        }
        glBindVertexArray(cubeVAO);
        model = glm::mat4(1.0f);
        colorShader.setVec2("texShift", glm::vec2(1.0f,1.0f));
        model = glm::translate(model, glm::vec3(8.75, 1.0f, 50.0f));
        model = glm::scale(model, glm::vec3(0.02f,0.65,0.5f));
        colorShader.setMat4("model",model);
        glDrawArrays(GL_TRIANGLES, 0, 36);
        glDisable(GL_TEXTURE_2D);



        /*  ███████╗███╗   ██╗███████╗███╗   ███╗██╗   ██╗    ██╗      ██████╗  ██████╗ ██╗ ██████╗
            ██╔════╝████╗  ██║██╔════╝████╗ ████║╚██╗ ██╔╝    ██║     ██╔═══██╗██╔════╝ ██║██╔════╝
            █████╗  ██╔██╗ ██║█████╗  ██╔████╔██║ ╚████╔╝     ██║     ██║   ██║██║  ███╗██║██║
            ██╔══╝  ██║╚██╗██║██╔══╝  ██║╚██╔╝██║  ╚██╔╝      ██║     ██║   ██║██║   ██║██║██║
            ███████╗██║ ╚████║███████╗██║ ╚═╝ ██║   ██║       ███████╗╚██████╔╝╚██████╔╝██║╚██████╗
            ╚══════╝╚═╝  ╚═══╝╚══════╝╚═╝     ╚═╝   ╚═╝       ╚══════╝ ╚═════╝  ╚═════╝ ╚═╝ ╚═════╝ */

        // This controls the creation of the enemy object and the rotations and translations towards
        // the player.
        // Calls two functions, followPlayer and rotateToPlayer

        if(SPAWN_ENEMY){
        enemyLocation = followPlayer(enemyLocation);
        float rotate = rotateToPlayer(enemyLocation);
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 2; j++) {
                // If its the head
                if (i == 0) {
                    bindTextures(face, face, NULL);
                } else {
                    bindTextures(black, black, black);
                }
                glBindVertexArray(cubeVAO);
                model = glm::mat4(1.0f);
                colorShader.setVec2("texShift", glm::vec2(1.0f, 1.0f));
                model = glm::translate(model, enemy[i][j].translate);
                model = glm::translate(model, enemyLocation);
                if (i == 2) {
                    model = glm::rotate(model, glm::radians(45.0f * currentFrame), glm::vec3(0.0f, 1.0f, 0.0f));
                } else if (i == 3) {
                    model = glm::rotate(model, glm::radians(-45.0f * currentFrame), glm::vec3(0.0f, 1.0f, 0.0f));
                }
                model = glm::rotate(model, glm::radians(-rotate), glm::vec3(0.0f, 1.0f, 0.0f));
                model = glm::scale(model, enemy[i][j].scale);
                colorShader.setMat4("model", model);
                glDrawArrays(GL_TRIANGLES, 0, 36);
            }
        }}




        //LOOP TO DRAW THE LIGHTBULBS
        if(!BLACKOUT) {
            cubeShader.use();
            cubeShader.setMat4("projection", projection);
            cubeShader.setMat4("view", view);
            glBindVertexArray(lightCubeVAO);
            for (int i = 0; i < 6; i++) {
                model = glm::mat4(1.0f);
                model = glm::translate(model, lightPositions[i]);
                model = glm::scale(model, glm::vec3(0.2f)); // Make it a smaller cube
                cubeShader.setMat4("model", model);
                glDrawArrays(GL_TRIANGLES, 0, 36);
            }
        }

        colorShader.use();
        bindTextures(win_screen, win_screen, win_screen);
        glBindVertexArray(cubeVAO);
        model = glm::mat4(1.0f);
        colorShader.setVec2("texShift", glm::vec2(1.0f,1.0f));
        model = glm::translate(model, glm::vec3(0.0f,0.0f,0.0f));
        model = glm::scale(model, glm::vec3(1.0f,1.0f,1.0f));
        colorShader.setBool("emmit", true);
        colorShader.setMat4("model",model);
        glDrawArrays(GL_TRIANGLES, 0, 36);
        glDisable(GL_TEXTURE_2D);
        colorShader.use();

        // Run the collision method handle collisions
        collisionLoop(currentFrame, window);

        // Glfw stuff
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    //DEALLOCATE THE RESOURCES
    glDeleteVertexArrays(1, &cubeVAO);
    glDeleteVertexArrays(1, &lightCubeVAO);
    glDeleteBuffers(1, &VBO);

    //TERMINATE GL
    glfwTerminate();
    return 0;
}

void startGame()
{
    DEAD = false;
    G_OVER = false;
    BLACKOUT = false;
    ROOMLIGHT = true;
    SPAWN_ENEMY = false;
    TOGGLE_PERSPECTIVE = false;
    FLASHLIGHT_HELD = false;
    enemyLocation = glm::vec3(23.75f, 1.0f, 37.5f);
    camera.Position = glm::vec3(7.0f, 0.75f,53.5f);
    camera.Front = glm::vec3(-3.0f, 0.0f, 12.0f);

    for(int i = 0; i < NUM_SERVERS; i++)
    {
        for(int j = 0; j < SERVER_VECS; j++)
        {
            servers[i][j] = originalServers[i][j];
        }
    }

    glfwSetTime(0.0f);
}

void bindTextures(unsigned int diffuse, unsigned int specular, unsigned int glow)
{
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, diffuse);
    glActiveTexture(GL_TEXTURE1);
    glBindTexture(GL_TEXTURE_2D, specular);
    glActiveTexture(GL_TEXTURE2);
    glBindTexture(GL_TEXTURE_2D, glow);
}

void collisionLoop(float currentFrame, GLFWwindow* window)
{
    glm::vec3 hitbox = glm::vec3(0.2,0.0,0.2);
    glm::vec3 buttonHitbox = glm::vec3(0.5f,0.5f,0.5f);
    glm::vec3 buttonPosition = glm::vec3(18.0f, 0.5f,30.25f);
    glm::vec3 enemyTriggerHitbox = glm::vec3(10.0f,1.5f,1.5f);
    glm::vec3 enemyTriggerPosition = glm::vec3(23.75f, 0.05f, 51.25f);
    glm::vec3 flashLightHitbox = glm::vec3(1.0f, 1.0f, 1.0f);
    glm::vec3 enemyHitbox = glm::vec3(1.0f, 1.0f, 1.0f);
    glm::vec3 exitDoorHitbox = glm::vec3(1.0f, 1.0f, 1.0f);

    // DO THE SERVER COLLISION
    for(int i = 0; i < NUM_SERVERS; i++) {
        for (int j = 0; j < SERVER_VECS; j++) {
            if(detectCollision(camera.Position, hitbox, servers[i][j].translate, servers[i][j].scale))
            {
                preventPlayerMovement(camera.Position, hitbox, servers[i][j].translate, servers[i][j].scale);
            }
        }
    }

    // Detect if the button is pressed
    if(detectCollision(camera.Position, hitbox, buttonPosition, buttonHitbox) && glfwGetKey(window, GLFW_KEY_E) == GLFW_PRESS)
    {
        if(!BLACKOUT)
        {
            // Store the current frame into the buttonAnimate (Its a variable in the header)
            buttonAnimate = currentFrame;
            BLACKOUT = true;
        }
    }

    // Enemy trigger zone
    if(detectCollision(camera.Position, hitbox, enemyTriggerPosition, enemyTriggerHitbox))
    {
        SPAWN_ENEMY = true;
    }

    // Detect if you hit the walls, and then correct it
    for(int i = 0; i < NUM_WALLS; i++)
    {
        if(detectCollision(camera.Position, hitbox, builder[i].translate, builder[i].scale))
        {
            preventPlayerMovement(camera.Position, hitbox, builder[i].translate, builder[i].scale);
        }
    }

    // Detect if you hit the starting room walls
    for(int i = 0; i < NUM_WALLS; i++)
    {
        if(detectCollision(camera.Position, hitbox, startingRoom[i].translate, startingRoom[i].scale))
        {
            preventPlayerMovement(camera.Position, hitbox, startingRoom[i].translate, startingRoom[i].scale);
        }
    }

    // Detect if you hit the table
    for(int i = 0; i < NUM_WALLS; i++)
    {
        if(detectCollision(camera.Position, hitbox, table[i].translate, table[i].scale))
        {
            preventPlayerMovement(camera.Position, hitbox, table[i].translate, table[i].scale);
        }
    }

    // Screen if you win, given that blackout mode is on and you haven't won eyt
    if(BLACKOUT && !G_OVER && detectCollision(camera.Position, hitbox, exitDoor[0].translate, exitDoorHitbox))
    {
        gameOverAnimate = glfwGetTime() + 10.0f;
        G_OVER = true;
    }

    if(detectCollision(camera.Position, hitbox, enemyLocation, enemyHitbox) && !DEAD)
    {
        gameOverAnimate = glfwGetTime() + 10.0f;
        DEAD = true;
    }

    // Check if the character is in range to pick up the flashlight
    bool flashlightCollision = detectCollision(camera.Position, hitbox, flashlight[0].translate, flashLightHitbox);
    if(flashlightCollision && !FLASHLIGHT_HELD)
    {
        FLASHLIGHT_HELD = true;
    }
}

void mouse_callback(GLFWwindow* window, double xpos, double ypos)
{
    if (firstMouse)
    {
        lastX = xpos;
        lastY = ypos;
        firstMouse = false;
    }

    float xoffset = xpos - lastX;
    float yoffset = lastY - ypos; // reversed since y-coordinates go from bottom to top

    lastX = xpos;
    lastY = ypos;


    camera.ProcessMouseMovement(xoffset, yoffset);
}

// Method for processing key presses
void processInput(GLFWwindow *window)
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
    {
        glfwSetWindowShouldClose(window, true);
    }
    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
        camera.ProcessKeyboard(FORWARD, deltaTime);
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
        camera.ProcessKeyboard(BACKWARD, deltaTime);
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
        camera.ProcessKeyboard(LEFT, deltaTime);
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
        camera.ProcessKeyboard(RIGHT, deltaTime);
    if (glfwGetKey(window, GLFW_KEY_P) == GLFW_PRESS)
        TOGGLE_PERSPECTIVE = !TOGGLE_PERSPECTIVE;
    if (glfwGetKey(window, GLFW_KEY_O) == GLFW_PRESS)
        SUPERBRIGHT = !SUPERBRIGHT;
    if (glfwGetKey(window, GLFW_KEY_N) == GLFW_PRESS)
        BLACKOUT = !BLACKOUT;
    if (glfwGetKey(window, GLFW_KEY_R) == GLFW_PRESS)
        startGame();
}

// glfw: whenever the window size changed (by OS or user resize) this callback function executes
// ---------------------------------------------------------------------------------------------
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    // make sure the viewport matches the new window dimensions; note that width and
    // height will be significantly larger than specified on retina displays.
    glViewport(0, 0, width, height);
}

unsigned int loadTexture(char const * path)
{
    unsigned int textureID;
    glGenTextures(1, &textureID);
    int width, height, nrComponents;
    // Flip the image so its the correct orientation
    stbi_set_flip_vertically_on_load(true);
    unsigned char *data = stbi_load(path, &width, &height, &nrComponents, 0);
    if (data)
    {
        GLenum format;
        if (nrComponents == 1)
            format = GL_RED;
        else if (nrComponents == 3)
            format = GL_RGB;
        else if (nrComponents == 4)
            format = GL_RGBA;

        glBindTexture(GL_TEXTURE_2D, textureID);
        glTexImage2D(GL_TEXTURE_2D, 0, format, width, height, 0, format, GL_UNSIGNED_BYTE, data);
        glGenerateMipmap(GL_TEXTURE_2D);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        stbi_image_free(data);
    }
    else
    {
        std::cout << "Texture failed to load at path: " << path << std::endl;
        stbi_image_free(data);
    }
    return textureID;
}


bool detectCollision(glm::vec3 &cameraPosition , glm::vec3 &cameraHitbox, glm::vec3 &objectPosition, glm::vec3 &objectHitbox)
{
    // This is a very chunky statement but it checks to see if the hitbox and positions
    // intersect. 
    bool collide = ((cameraPosition.x + cameraHitbox.x) >=  (objectPosition.x - objectHitbox.x/2.0f)  && (objectPosition.x + objectHitbox.x/2.0f) >=  (cameraPosition.x - cameraHitbox.x) &&
                           (cameraPosition.z + cameraHitbox.z) >=  (objectPosition.z - objectHitbox.z/2.0f)  && (objectPosition.z + objectHitbox.z/2.0f) >=  (cameraPosition.z - cameraHitbox.z));
    return collide;
}

void preventPlayerMovement(glm::vec3 &cameraPosition, glm::vec3 &cameraHitBox, glm::vec3 &barrierPosition, glm::vec3 &barrierHitBox)
{
    float cameraBoxPositive = cameraPosition.x + cameraHitBox.x;
    float cameraBoxNegative = cameraPosition.x - cameraHitBox.x;
    float wallBoxPositive = (barrierPosition.x + barrierHitBox.x);
    float wallBoxNegative = (barrierPosition.x - barrierHitBox.x);

    float positiveXCollision = cameraBoxPositive - wallBoxNegative; //CAMERA MINUS WALL
    float negativeXCollision = wallBoxPositive - cameraBoxNegative; //WALL MINUS CAMERA
    float positiveZCollision = (barrierPosition.z + barrierHitBox.z) - (cameraPosition.z - cameraHitBox.z);
    float negativeZCollision = (cameraPosition.z + cameraHitBox.z) - (barrierPosition.z - barrierHitBox.z);

    
    // Check the direction that we wanna push the camera depending on the side of the wall they are on 
    if(positiveZCollision < negativeZCollision && positiveZCollision < positiveXCollision && positiveZCollision < negativeXCollision)
    {
        // Move the camera posively across the Z
        cameraPosition.z = barrierPosition.z + barrierHitBox.z + cameraHitBox.z;
    }
    else if (negativeZCollision < positiveXCollision && negativeZCollision < negativeXCollision)
    {
        // Move the camera negatively accross the Z
        cameraPosition.z = barrierPosition.z - barrierHitBox.z - cameraHitBox.z;
    }
    else if (positiveXCollision > negativeXCollision)
    {
        // Move the camera posively across the X
        cameraPosition.x = barrierPosition.x + barrierHitBox.x + cameraHitBox.x;
    }
    else if (positiveXCollision < positiveZCollision)
    {
        // Move the camera posively across the X
        cameraPosition.x = barrierPosition.x - barrierHitBox.x - cameraHitBox.x;
    }
}

glm::vec3 followPlayer(glm::vec3 position)
{
    if(!DEAD)
    {
        float dir_x = camera.Position.x - position.x;
        float dir_z = camera.Position.z - position.z;
        float hypotenuse = sqrt(dir_x*dir_x + dir_z*dir_z);
        dir_x /= hypotenuse;
        dir_z /= hypotenuse;
        position.x += dir_x * 0.01f;
        position.z += dir_z * 0.01f;
    }
    return position;
}

float rotateToPlayer(glm::vec3 position)
{
    float dir_x = camera.Position.x - position.x;
    float dir_z = camera.Position.z - position.z;
    float rotate = atan2(dir_z, dir_x);
    rotate *=  (180.0/PI);
    return rotate;
}
