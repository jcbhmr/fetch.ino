#pragma once
/**
 * @file This should be called "fetch.h", but since the library name is fetch,
 * the name "fetch.h" was taken by the "index.h"-type file that is top-level
 * exported. Thus, this fetch()-only header needs to pick another name. Hence,
 * we chose "fetch_.h" as a next-best thing.
 */
#include <Arduino.h>
#include "Response.h"
#include "RequestInfo.h"
#include "Request.h"
#include "RequestInit.h"

namespace fetch {

fetch::Response fetch(fetch::RequestInfo& input);
fetch::Response fetch(fetch::Request& input);
fetch::Response fetch(const String& input);
fetch::Response fetch(fetch::RequestInfo& input, const fetch::RequestInit& init);
fetch::Response fetch(fetch::Request& input, const fetch::RequestInit& init);
fetch::Response fetch(const String& input, const fetch::RequestInit& init);

}
