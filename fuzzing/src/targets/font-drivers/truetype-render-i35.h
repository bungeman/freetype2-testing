// truetype-render-i35.h
//
//   Render TrueType faces using interpreter version 35.
//
// Copyright 2018-2019 by
// Armin Hasitzka.
//
// This file is part of the FreeType project, and may only be used,
// modified, and distributed under the terms of the FreeType project
// license, LICENSE.TXT.  By continuing to use, modify, or distribute
// this file you indicate that you have read the license and
// understand and accept it fully.


#ifndef TARGETS_FONT_DRIVERS_TRUETYPE_RENDER_I35_H_
#define TARGETS_FONT_DRIVERS_TRUETYPE_RENDER_I35_H_


#include "targets/font-drivers/truetype-render.h"


namespace freetype {


  class TrueTypeRenderI35FuzzTarget
    : public TrueTypeRenderFuzzTarget
  {
  public:


    TrueTypeRenderI35FuzzTarget();
  };
}


#endif // TARGETS_FONT_DRIVERS_TRUETYPE_RENDER_I35_H_
