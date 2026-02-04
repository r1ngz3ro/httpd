#ifndef CFRAMEWORK
#define CFRAMEWORK

#include "routes.h"
int start_server(int port);
int set_routes(struct route* _routes);

static struct route *routes;




#endif