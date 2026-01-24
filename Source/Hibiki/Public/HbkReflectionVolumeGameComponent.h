#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkReflectionVolumeComponentTNG.h"
#include "HbkReflectionVolumeGameComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkReflectionVolumeGameComponent : public UHbkReflectionVolumeComponentTNG {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ReflectionPostTableRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFadeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFadeFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGlobalVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DrawPriority;
    
    UHbkReflectionVolumeGameComponent(const FObjectInitializer& ObjectInitializer);

};

