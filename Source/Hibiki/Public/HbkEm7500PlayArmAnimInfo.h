#pragma once
#include "CoreMinimal.h"
#include "HbkEm7500PlayArmAnimInfo.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FHbkEm7500PlayArmAnimInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSyncBPM;
    
    HIBIKI_API FHbkEm7500PlayArmAnimInfo();
};

