#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyCharacter.h"
#include "HbkFlyingEnemyCharacter.generated.h"

UCLASS(Blueprintable)
class AHbkFlyingEnemyCharacter : public AHbkEnemyCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyingHeightDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyingHeightFromGround_Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyingHeightThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyingHeightInterpSpeedDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundPosCheckLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultCapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFlyingOffsetHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyingOffsetHeightInterpSpeedToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyingOffsetHeightInterpSpeedToDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyingOffsetHeight_MinToGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyingOffsetHeightTarget_Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyingOffsetHeightTarget_Max;
    
public:
    AHbkFlyingEnemyCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool IsEnabledAdjustHeight();
    
    UFUNCTION(BlueprintCallable)
    bool IsAcceptableHeight();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFlyingOffsetHeight() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableBattleCapsuleScale();
    
    UFUNCTION(BlueprintCallable)
    bool AdjustLocationHeight(float DeltaTime);
    
};

