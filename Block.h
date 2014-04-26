/*
 * A basic disk block object
 */
#ifndef block_h
#define block_h
#pragma once

#define BLOCK_SIZE 4096


using namespace std;

class Block {

public:
    Block();
    Block(char *);

private:
    char* bytes;
};

#endif block_h
