#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_bg1080Action.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHbkGimmick_bg1080Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScreenTransitionNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> TeleportPoint;
    
    HIBIKI_API FHbkGimmick_bg1080Action();
};

