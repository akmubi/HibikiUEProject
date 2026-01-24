#pragma once
#include "CoreMinimal.h"
#include "FHbkGimmick_BuildingSlidePartnerType.h"
#include "HbkGimmick_BuildingSlidePartnerTimelineInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_BuildingSlidePartnerTimelineInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_BuildingSlidePartnerType PartnerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    HIBIKI_API FHbkGimmick_BuildingSlidePartnerTimelineInfo();
};

