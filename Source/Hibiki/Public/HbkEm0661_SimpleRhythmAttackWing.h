#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkEm0661_SimpleRhythmAttackWing.generated.h"

class UAkComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm0661_SimpleRhythmAttackWing : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkCompMain;
    
public:
    AHbkEm0661_SimpleRhythmAttackWing(const FObjectInitializer& ObjectInitializer);

};

