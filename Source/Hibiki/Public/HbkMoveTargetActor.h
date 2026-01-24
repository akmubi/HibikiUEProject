#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkMoveTargetActor.generated.h"

class AHbkCharacter;

UCLASS(Blueprintable)
class HIBIKI_API AHbkMoveTargetActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkCharacter> OwnerPawn;
    
public:
    AHbkMoveTargetActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowDebug();
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerPawn(AHbkCharacter* NewOwner);
    
    UFUNCTION(BlueprintCallable)
    float GetDistToOwnerPawn(bool DistIs2D);
    
};

