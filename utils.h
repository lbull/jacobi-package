#ifndef _UTILS_H
#define _UTILS_H
#endif

#include <stdio.h>

#define LEFT 1.0
#define RIGHT 1.0
#define TOP 1.0
#define BOTTOM 1.0
#define EPSILON 0.01
#define MIDDLE 0.0
#define MAXITERS 100000


double **matrix;
double **newmatrix;
double left, right, top, bottom, middle, epsilon;
int dimension, total_processes;

void createMatrix( );
void destroyMatrix( );
void handleInput(int, char**);
void printMatrix(FILE*);
double dabs(double);
void printAttributes(FILE*);
void calculateDeltaTime(struct timeval start, struct timeval end, struct timeval *res);


