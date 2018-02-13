# edid-lib
C++ Edid library for parsing edid blobs

## Parsers
  Transforms a blob of data into the corresponding Model.

## Model
  Holds EDID Data in an object

### Different Models 
1. EDID 
- Versions 
- Descriptors
  - Video Descriptors
    - Detailed Timing Model
    - Standard Timing Model
    - Established Timing Model
    - CTA Short Video Models
  - Monitor Descriptors
  - Audio Descriptors

## Context
  Transforms Models to default Models. 
  Ex: Established Timing + Video Mode Schema ==> Context = Video Mode Model (Default Video Descriptor Model)
  Ex: Video Mode Model (Default Video Descriptor Model) + Established Timing Schema ==> Context = Established Timing Model
  - Obj ==> Context ==> {}
  - {} ==> Context ==> Obj
    
## Adaptors
  Friendly interface to tranform one type of model to another.
  Uses Contexts to transform one model to another model.
### Example 1: Turning a Detailed Timing Model into an Established Timing Model
  - Step 1: Some Obj + Default Schema ==> Context = Default Model 
  - Step 2: Default Model + other schema ==> Context = Other Model
