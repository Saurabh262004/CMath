#ifndef MATRIX_H
#define MATRIX_H

// Matrix2I
typedef struct {
  int rows;
  int columns;
  int comp[];
} Matrix2I;

Matrix2I *matrix2I_create(int rows, int columns);

int matrix2I_get(Matrix2I *m, int row, int column, int *out);

int matrix2I_set(Matrix2I *m, int row, int column, int value);

void matrix2I_randomize(Matrix2I *m, int min, int max);

// Matrix2F
typedef struct {
  int rows;
  int columns;
  float comp[];
} Matrix2F;

Matrix2F *matrix2F_create(int rows, int columns);

int matrix2F_get(Matrix2F *m, int row, int column, float *out);

int matrix2F_set(Matrix2F *m, int row, int column, float value);

void matrix2F_randomize(Matrix2F *m, float min, float max);

#endif
