/* Created By Jake Levsen
 * Date Feb. 12, 2018
 * 
 * Base Class for Parser Classes
 * */

#pragma once

namespace edidLib {

  class Parser {
    
  public:
  
    Parser ( const std::vector<uint8_t>& iBlob ) :
      mBlob(iBlob) 
    {}

    // Returns an expected Model
    //  Ex: EdidBaseParser returns an EdidBaseModel
    // Validated with Schema and Context
    //  Ex: EdidModesSchema + EdidBaseModel ==> ViewModesContext 
    virtual SomeType parse () = 0;

  };

}
