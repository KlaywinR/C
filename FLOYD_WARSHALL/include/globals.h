#ifndef GLOBALS_H
#define GLOBALS_H

#define MAX 100
#define INFINIT 999.0

extern int n;
extern char citys[MAX][100];
extern int predecessor_matrix[MAX][MAX];
extern float minimum_distance_matrix[MAX][MAX];
extern float adjacency_matrix[MAX][MAX];
extern int loaded_data;
extern int algorithm_executed;

#endif
