/* Created By Jake Levsen
 * Date Feb. 12, 2018
 *
 * Base Class for Models
 * */

#pragma once

#include <nlohmann/json.hpp>

using json = nlohmann::json;

namespace edidLib {
  
  class ModelBase {
  
    public:

      ModelBase () {}
      virtual ~ModelBase() {}

      virtual json toJson () = 0;
  };
}
