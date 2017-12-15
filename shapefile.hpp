#ifndef SHAPEFILE_HPP
#define SHAPEFILE_HPP

#include <stdio.h>
#include <set>
#include <map>
#include <string>
#include "mbtiles.hpp"
#include "serial.hpp"
int forcetoutf8(const char *from_charset,char *inbuf,int inlen,char *outbuf,int outlen);
void parse_shapefile(std::vector<struct serialization_state> &sst, std::string fname, int layer, std::string layername);

#endif
