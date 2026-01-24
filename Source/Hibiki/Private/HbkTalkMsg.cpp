#include "HbkTalkMsg.h"

AHbkTalkMsg::AHbkTalkMsg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bDeactiveStart = false;
    this->TalkMsgState = 0;
}




