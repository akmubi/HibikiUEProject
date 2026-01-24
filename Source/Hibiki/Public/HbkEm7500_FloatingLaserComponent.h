#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkEm7500FloatingLaserRequestInfo.h"
#include "HbkEm7500FloatingLaserRequestParam.h"
#include "HbkEm7500_FloatingLaserComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkEm7500_FloatingLaserComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500FloatingLaserRequestParam> RequestParams;
    
public:
    UHbkEm7500_FloatingLaserComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestShot(const FHbkEm7500FloatingLaserRequestInfo& Info, bool IsAdjustNextNote);
    
    UFUNCTION(BlueprintCallable)
    void AbortShot();
    
};

