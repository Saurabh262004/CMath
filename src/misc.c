#include "../include/vector.h"
#include "../include/misc.h"
#include <stdlib.h>
#include <math.h>

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
  if (min == max) return min;

  int dist = abs(max - min);

  int rDist = rand() % (dist + 1);

  Vec2I distLimit = {0, dist};
  Vec2I limit = {min, max};

  return mapI(rDist, distLimit, limit);
}

float randF(float min, float max) {
  if (min == max) return min;

  float dist = fabsf(max - min);

  float r = (float)rand() / (float)RAND_MAX;

  float rDist = r * dist;

  Vec2F distLimit = {0.0f, dist};
  Vec2F limit = {min, max};

  return mapF(rDist, distLimit, limit);
}
