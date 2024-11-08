#ifndef IMAGEINFO.H
#define IMAGEINFO.H

struct ImageInfo{

    unsigned int width;
    unsigned int height;
    const unsigned char* data;
};

ImageInfo* newImageInfo();
unsigned int getWidth(ImageInfo* self);
unsigned int getHeight(ImageInfo* self);

#endif