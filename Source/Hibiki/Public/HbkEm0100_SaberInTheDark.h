#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimEnums.h"
#include "HbkEm0100_Saber.h"
#include "SaberInTheDarkFinishMoveDelegate.h"
#include "HbkEm0100_SaberInTheDark.generated.h"

UCLASS(Blueprintable)
class AHbkEm0100_SaberInTheDark : public AHbkEm0100_Saber {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaberInTheDarkFinishMove OnFinishMove_Delegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERootMotionMode::Type> DuringRootMotionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnimationTypesNum;
    
public:
    AHbkEm0100_SaberInTheDark(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestMove(FVector InMovePos, float InAcceptanceRadius, float InMoveSpeedRate);
    
    UFUNCTION(BlueprintCallable)
    void RequestAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRequestMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAnimationType() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelRequestMove();
    
};

