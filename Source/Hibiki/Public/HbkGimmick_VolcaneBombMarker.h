#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EHbkAHbkGimmick_VolcaneBombType.h"
#include "HbkGimmickBase_NoSave.h"
#include "HbkGimmick_VolcaneBombMarker.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_VolcaneBombMarker : public AHbkGimmickBase_NoSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkAHbkGimmick_VolcaneBombType VolcaneBombType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolcaneBombRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAdjustGroundLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D GroundLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> GroundTraceCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GroundLocation;
    
    AHbkGimmick_VolcaneBombMarker(const FObjectInitializer& ObjectInitializer);

};

