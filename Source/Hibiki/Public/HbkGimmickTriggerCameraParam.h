#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkTalkScrTransitOption.h"
#include "HbkGimmickTriggerCameraParam.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHbkGimmickTriggerCameraParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName callSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkScrTransitOption StartTransit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkScrTransitOption EndTransit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> TeleportPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DelayNoteQuaterCount;
    
    HIBIKI_API FHbkGimmickTriggerCameraParam();
};

