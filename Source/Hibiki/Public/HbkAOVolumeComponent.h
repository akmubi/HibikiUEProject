#pragma once
#include "CoreMinimal.h"
#include "AOVolumeComponentTNG.h"
#include "Engine/EngineTypes.h"
#include "HbkAOVolumeComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkAOVolumeComponent : public UAOVolumeComponentTNG {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAddCapsuleHalfHeightForMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawEnableDistanceMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawEnableDistanceMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> TraceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTraceStartBySocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TraceStartSocketName;
    
public:
    UHbkAOVolumeComponent(const FObjectInitializer& ObjectInitializer);

};

