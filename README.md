# edid-lib
C++ Edid library for parsing edid blobs

## Parsers
  Transforms a blob of data into the corresponding Model.
  For version 1, there will on be two models
  1. EDID Model: Holds Descriptor Models
  2. Descriptor Model: Holds Video Mode information
    - Resolution, Vertical Refresh Rate, Clocking, ext

## Model
  Holds unifying information on different data types
  - Edids, Descriptors

  Has a unified method, JSON, to represent data.
  Specifically this lib uses nlohmann's json found
  here https://github.com/nlohmann/json.

### Different Models 
1. EDID 
2. Descriptors
  - Video Descriptors
    - Detailed Timing Model
    - Standard Timing Model
    - Established Timing Model
    - CTA Short Video Models
  - Not Version 1: 
    - Monitor Descriptors
    - Audio Descriptors

## Context
  Transforms different data sets (of same type) to Models. 
  Ex: Established Timing + Video Mode Schema ==> Context = Video Mode Model
  Ex: Video Mode Model + Established Timing Schema ==> Context = Established Timing Model
  - Obj ==> Context ==> {}
  - {} ==> Context ==> Obj
    
## Adaptors
  Friendly interface to tranform one type of model to another.
  Uses Contexts to transform one model to another model.
### Example 1: Turning a Detailed Timing Model into an Established Timing Model
  - Step 1: Some Obj + Default Schema ==> Context = Default Model 
  - Step 2: Default Model + other schema ==> Context = Other Model
