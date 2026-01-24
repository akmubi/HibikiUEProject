#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_SpectraCentralRoomEntranceDoorTransition.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_SpectraCentralRoomEntranceDoorTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScreenTransitionNoteCount;
    
    HIBIKI_API FHbkGimmick_SpectraCentralRoomEntranceDoorTransition();
};

