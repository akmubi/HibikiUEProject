#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "HbkEm0210_FlameThrower.h"
#include "SideStoryFinishMoveDelegate.h"
#include "HbkEm0210_SideStory.generated.h"

UCLASS(Blueprintable)
class AHbkEm0210_SideStory : public AHbkEm0210_FlameThrower {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSideStoryFinishMove OnFinishMove_Delegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag JumpActionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag JumpEntryActionTag;
    
public:
    AHbkEm0210_SideStory(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestMoveJump(FVector InMovePos, bool bIsLeaving);
    
    UFUNCTION(BlueprintCallable)
    void RequestMove(FVector InMovePos, float InAcceptanceRadius, bool bLastMove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShootingFlame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRequestJumpLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDeathRequest() const;
    
};

