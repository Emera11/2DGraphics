#pragma once
#include<stdio.h>
#include<stdlib.h>

void New_Array_2D(char** a, const int v, const int h)
{
    a = (char**)calloc(v, sizeof(char*));
  
    for (int i = 0; i < v; i++) {
        a[i] = (char*)calloc(h, sizeof(int));
    }

}
