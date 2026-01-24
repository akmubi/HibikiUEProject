#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkAttackAreaVolume.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkAttackAreaVolume : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* AttackableVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CellScale;
    
public:
    AHbkAttackAreaVolume(const FObjectInitializer& ObjectInitializer);

};

