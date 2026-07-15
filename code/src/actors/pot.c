#include "pot.h"
#include "z3D/z3D.h"

Void ObjTsubo_Init(Actor* thisx, GlobalContext* globalctx);

Void ObjTsubo_rInit(Actor* thisx, GlobalContext* globalctx){
     ObjTsubo_Init(thisx, globalctx);

    thisx->params = 0x0E;

}
