
#include "./include/cframework.h"
#include "./include/routes.h"
#include <stdio.h>

static void my_handler(int c, route_params *p, http_request *req) {

  printf("the version: %s, param: %s", req->version, p->params[0].value);

  return;
}

int main() {
  struct route routes[] = {{"GET", "/users/:id", my_handler}};

  set_routes(routes);
  start_server(3000);
  return 0;
}
