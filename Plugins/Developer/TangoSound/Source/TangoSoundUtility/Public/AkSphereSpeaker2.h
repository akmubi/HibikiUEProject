#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AkSphereSpeaker2.generated.h"

class UAkSphereComponent2;

UCLASS(Blueprintable)
class TANGOSOUNDUTILITY_API AAkSphereSpeaker2 : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkSphereComponent2* AkSphereComponent2;
    
    AAkSphereSpeaker2(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetEnable(bool bEnable);
    
};

