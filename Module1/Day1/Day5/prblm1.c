#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

float calculateVolume(struct Box* boxPtr) {
    return (*boxPtr).length * (*boxPtr).width * (*boxPtr).height;
}

float calculateSurfaceArea(struct Box* boxPtr) {
    return 2 * ((*boxPtr).length * (*boxPtr).width + (*boxPtr).width * (*boxPtr).height + (*boxPtr).height * (*boxPtr).length);
}

int main() {
    struct Box myBox;
    struct Box* boxPtr = &myBox;
    
    
    (*boxPtr).length = 5.0;
    (*boxPtr).width = 3.0;
    (*boxPtr).height = 2.0;
    
    
    float volume = calculateVolume(boxPtr);
    float surfaceArea = calculateSurfaceArea(boxPtr);
    
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);
    
    
    volume = boxPtr->length * boxPtr->width * boxPtr->height;
    surfaceArea = 2 * (boxPtr->length * boxPtr->width + boxPtr->width * boxPtr->height + boxPtr->height * boxPtr->length);
    
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);
    
    return 0;
}
