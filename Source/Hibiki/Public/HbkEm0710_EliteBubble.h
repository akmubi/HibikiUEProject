#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyCharacter.h"
#include "HbkEm0710_EliteBubble.generated.h"

UCLASS(Blueprintable)
class AHbkEm0710_EliteBubble : public AHbkEnemyCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyingAttackInhibitRate;
    
public:
    AHbkEm0710_EliteBubble(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFlyingAttackInhibitRate(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckInhibitFlyingAttack() const;
    
};

