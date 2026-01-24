#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AkMPS.generated.h"

class AAkMPL;
class UAkMPSComponent;

UCLASS(Blueprintable)
class TANGOSOUNDUTILITY_API AAkMPS : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkMPSComponent* AkMPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAkMPL*> Listeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDrawEditor_AllMPL;
    
    AAkMPS(const FObjectInitializer& ObjectInitializer);

};

