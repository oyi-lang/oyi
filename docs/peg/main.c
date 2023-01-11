#include <stdio.h>

extern int yyparse();

int main() {
  if (!yyparse()) {
    fprintf(stderr, "failed\n") ;
    return 1;
  }

  fprintf(stdout, "passed\n");

  return 0;
}