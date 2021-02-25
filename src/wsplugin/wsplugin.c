#include <config.h>
#include <epan/packet.h>


static int proto_destr = -1;

void proto_register_destr(void) {
    proto_destr = proto_register_protocol("Simple destr protocol",
                                          "SimpleDestr", "destr");
}
