#include <string.h>

const char *ADD = "+";
const char *SUB = "-";
const char *DIV = "/";
const char *MULT = "*";

int rpn(const int values[], const char *operation) {
  const int size = sizeof(&values) / sizeof(int);

  int result = 0;

  for (int i = size; i >= 0; i--) {
    if (strcmp(ADD, operation) == 0) {
      result += values[ i ];
    };

    if (strcmp(SUB, operation) == 0) {
      if (i == size) {
        result = values[ i ];
        continue;
      }

      result -= values[ i ];
    };

    if (strcmp(DIV, operation) == 0) {
      if (i == size) {
        result = values[ i ];
        continue;
      }

      result /= values[ i ];
    };

    if (strcmp(MULT, operation) == 0) {
      if (i == size) {
        result = values[ i ];
        continue;
      }

      result *= values[ i ];
    };
  }

  return result;
}
