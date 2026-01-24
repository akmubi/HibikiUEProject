#pragma once
#include "CoreMinimal.h"
#include "HbkMobActor.h"
#include "HbkTangochanActor.generated.h"

UCLASS(Blueprintable)
class AHbkTangochanActor : public AHbkMobActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivateRenderTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivateDist;
    
public:
    AHbkTangochanActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnSignificanceChanged(bool IsActive);
    
};

