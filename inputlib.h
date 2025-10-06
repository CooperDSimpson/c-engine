#pragma once

#include <GLFW/glfw3.h>
#include <stdbool.h>
/*
typedef struct Keyboard Keyboard;

struct Keyboard {
    GLFWwindow* window;
    bool keys[1024];
    bool keysLast[1024];

    // Methods
    void (*update)(Keyboard* self);
    bool (*isPressed)(Keyboard* self, int key);
    bool (*justPressed)(Keyboard* self, int key);
    bool (*justReleased)(Keyboard* self, int key);
};

// Macro constructor with encapsulated static functions
#define Keyboard_new(kb, win) do { \
    (kb).window = (win); \
    for(int i=0;i<1024;i++){ (kb).keys[i] = (kb).keysLast[i] = false; } \
    static void _update(Keyboard* self) { \
        for(int i=0;i<1024;i++){ \
            self->keysLast[i] = self->keys[i]; \
            self->keys[i] = glfwGetKey(self->window,i) == GLFW_PRESS; \
        } \
    } \
    static bool _isPressed(Keyboard* self,int key) { return self->keys[key]; } \
    static bool _justPressed(Keyboard* self,int key) { return self->keys[key] && !self->keysLast[key]; } \
    static bool _justReleased(Keyboard* self,int key) { return !self->keys[key] && self->keysLast[key]; } \
    (kb).update = _update; \
    (kb).isPressed = _isPressed; \
    (kb).justPressed = _justPressed; \
    (kb).justReleased = _justReleased; \
} while(0)
*/
