#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_MagnetRailJumpInfo.generated.h"

class AHbkGimmick_MagnetRailJump;

USTRUCT(BlueprintType)
struct FHbkGimmick_MagnetRailJumpInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_MagnetRailJump* JumpActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextMagnetPointEnabledNoteCount;
    
    HIBIKI_API FHbkGimmick_MagnetRailJumpInfo();
};

