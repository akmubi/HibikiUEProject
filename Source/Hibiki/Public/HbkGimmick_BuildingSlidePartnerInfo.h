#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FHbkGimmick_BuildingSlidePartnerType.h"
#include "HbkGimmick_BuildingSlidePartnerAnimationInfo.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_BuildingSlidePartnerInfo.generated.h"

class AHbkPartnerAnimationActor;

USTRUCT(BlueprintType)
struct FHbkGimmick_BuildingSlidePartnerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_BuildingSlidePartnerType PartnerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkPartnerAnimationActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_BuildingSlidePartnerAnimationInfo> ActionList;
    
    HIBIKI_API FHbkGimmick_BuildingSlidePartnerInfo();
};

