#pragma once
#include "CoreMinimal.h"
#include "AkMidiEventBase.h"
#include "AkMidiGeneric.generated.h"

USTRUCT(BlueprintType)
struct FAkMidiGeneric : public FAkMidiEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 param1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 param2;
    
    AKAUDIO_API FAkMidiGeneric();
};

