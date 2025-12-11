#include "../include/vector.h"
#include "../include/misc.h"
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
  srand(time(NULL));
}

int mapI(int n, Vec2I v1, Vec2I v2) {
  double a = v1.x, b = v1.y;
  double c = v2.x, d = v2.y;
  return (int)(c + (n - a) * (d - c) / (b - a));
}

float mapF(float n, Vec2F v1, Vec2F v2) {
  double a = v1.x, b = v1.y;
  double c = v2.x, d = v2.y;
  return (float)(c + (n - a) * (d - c) / (b - a));
}

int randI(int min, int max) {
  Vec2I v1 = {0, RAND_MAX};
  Vec2I v2 = {min, max};

  return mapI(rand(), v1, v2);
}

float randF(float min, float max) {
  Vec2F v1 = {0.0f, (float)RAND_MAX};
  Vec2F v2 = {min, max};

  return mapF((float)rand(), v1, v2);
}
