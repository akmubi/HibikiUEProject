#pragma once
#include "CoreMinimal.h"
#include "EHbkAHbkGimmick_VolcaneBombType.h"
#include "EHbkAHbkGimmick_VolcaneEruptionPoint.h"
#include "EHbkAHbkGimmick_VolcaneEruptionType.h"
#include "EHbkNote.h"
#include "HbkGimmick_VolcaneEruptionVolcaneBomb.generated.h"

class AHbkGimmick_VolcaneBombMarker;

USTRUCT(BlueprintType)
struct FHbkGimmick_VolcaneEruptionVolcaneBomb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote SyncNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkAHbkGimmick_VolcaneEruptionType EruptionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkAHbkGimmick_VolcaneBombType VolcaneBombType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkAHbkGimmick_VolcaneEruptionPoint EruptionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_VolcaneBombMarker* VolcaneBombMarker;
    
    HIBIKI_API FHbkGimmick_VolcaneEruptionVolcaneBomb();
};

