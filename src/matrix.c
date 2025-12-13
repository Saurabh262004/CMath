#include <stdlib.h>
#include <math.h>
#include "../include/matrix.h"

// Matrix2I
Matrix2I *matrix2I_create(int rows, int columns) {
  int totalData = rows * columns;

  Matrix2I *m = malloc(sizeof(Matrix2I) + totalData * sizeof(int));

  if (!m) return NULL;

  m->rows = rows;
  m->columns = columns;

  return m;
}

int matrix2I_get(Matrix2I *m, int row, int column, int *out) {
  if (row >= m->rows || row < 0 || column >= m->columns || column < 0)
    return -1;

  *out = m->comp[row * m->columns + column];

  return 0;
}

int matrix2I_set(Matrix2I *m, int row, int column, int value) {
  if (row >= m->rows || row < 0 || column >= m->columns || column < 0)
    return -1;

  m->comp[row * m->columns + column] = value;

  return 0;
}

// Matrix2F
Matrix2F *matrix2F_create(int rows, int columns) {
  int totalData = rows * columns;

  Matrix2F *m = malloc(sizeof(Matrix2F) + totalData * sizeof(float));

  if (!m) return NULL;

  m->rows = rows;
  m->columns = columns;

  return m;
}

int matrix2F_get(Matrix2F *m, int row, int column, float *out) {
  if (row >= m->rows || row < 0 || column >= m->columns || column < 0)
    return -1;

  *out = m->comp[row * m->columns + column];

  return 0;
}

int matrix2F_set(Matrix2F *m, int row, int column, float value) {
  if (row >= m->rows || row < 0 || column >= m->columns || column < 0)
    return -1;

  m->comp[row * m->columns + column] = value;

  return 0;
}
