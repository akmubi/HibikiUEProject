#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_SpectraUpdateRestart.generated.h"

class AHbkPlayerRestartTrigger;

UCLASS(Blueprintable)
class AHbkGimmick_SpectraUpdateRestart : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHbkPlayerRestartTrigger*> RestartTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocationOffsetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PermissionHeightDistance;
    
public:
    AHbkGimmick_SpectraUpdateRestart(const FObjectInitializer& ObjectInitializer);

};

