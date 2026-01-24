#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkCheckPointComponent.generated.h"

class APlayerStart;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkCheckPointComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CheckPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APlayerStart> PlayerRestart;
    
    UHbkCheckPointComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    APlayerStart* UpdateGameFlag(int32 NewFlagValue, bool bForce);
    
};

