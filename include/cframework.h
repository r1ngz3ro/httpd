#ifndef CFRAMEWORK
#define CFRAMEWORK

#include "routes.h"
int start_server(int port, struct route routes[], int n);
int set_routes(struct route* _routes);


static struct route *routes;




#endif