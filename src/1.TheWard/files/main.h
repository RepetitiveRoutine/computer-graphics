// AUTHOR - MAX BARKER
// SID - 19624729

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <learnopengl/camera.h>
#include <learnopengl/shader.h>
#include <learnopengl/filesystem.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <string>
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"


void preventPlayerMovement(glm::vec3 &cameraPosition , glm::vec3 &cameraHitBox, glm::vec3 &barrierPosition, glm::vec3 &barrierHitBox);
void mouse_callback(GLFWwindow* window, double xpos, double ypos);
void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow *window);
unsigned int loadTexture(char const * path);
glm::vec3 followPlayer(glm::vec3 position);
float rotateToPlayer(glm::vec3 position);
bool detectCollision(glm::vec3 &cameraPosition , glm::vec3 &cameraHitbox, glm::vec3 &objectPosition, glm::vec3 &objectHitbox);
void bindTextures(unsigned int diffuse, unsigned int specular, unsigned int glow);
void collisionLoop(float currentFrame, GLFWwindow* window);
void startGame();

// EVENT TRIGGERS
bool FLASHLIGHT_HELD = false;
bool SUPERBRIGHT = true;
bool BLACKOUT = false;
bool SPAWN_ENEMY = false;
bool TOGGLE_PERSPECTIVE = false;
bool ROOMLIGHT = true;
bool DEAD = false;
bool G_OVER = false;

// settings
const unsigned int SCR_WIDTH = 1920;
const unsigned int SCR_HEIGHT = 1080;
const float PI = 3.14159;

//POSITIONS OF OBJECTS
//BUTTON
glm::vec3 buttonFramePos = glm::vec3(17.53f, 0.5f,30.25f);
glm::vec3 buttonPos = glm::vec3(17.57f, 0.5f,30.25f);



//CAMERA
Camera camera(glm::vec3(7.0f, 0.75f,53.5f));
glm::vec3 cameraHitBox = glm::vec3(0.2, 0.0, 0.2);

float yaw   = -90.0f;
float pitch =  0.0f;
float lastX = SCR_WIDTH / 2,lastY = SCR_HEIGHT / 2;
float fov   =  45.0f;
bool firstMouse = true;

//ENEMY
glm::vec3 enemyLocation = glm::vec3(23.75f, 1.0f, 37.5f);
glm::vec3 ground(10.0f, 0.0f, 10.0f);

// Time taken for shit
float deltaTime = 0.0f;	// Time between current frame and last frame
float lastFrame = 0.0f; // Time of last frame

//Button
float buttonAnimate = 0.0f;
float gameOverAnimate = 0.0f;


//Flashlight
float flashlightQuadratic = 0.036f;
float flashlightLinear = 0.09f;
float lightIntensity = 0.25f;



