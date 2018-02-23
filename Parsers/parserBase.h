/* Created By Jake Levsen
 * Date Feb. 12, 2018
 * 
 * Base Class for Parser Classes
 * */

#pragma once

#include <vector>

#include <edidLib/ModelBase>;

namespace edidLib {

  class ParserBase {
    
  /* A functor class */

  public:
  
    ParserBase () {}
    virtual ~ParserBase() {}

    virtual ModelBase operator() ( const std::vector<uint8_t>& iRaw ) { 
      return ModelBase(); 
    };
  };

}
