#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_EnemyLift.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_EnemyLift : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGimmick_EnemyLiftMoveEnd);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_EnemyLiftMoveEnd OnForwardMoveEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_EnemyLiftMoveEnd OnBackMoveEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer moveEndTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName moveEndCallSign;
    
public:
    AHbkGimmick_EnemyLift(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SplineMoveStart();
    
    UFUNCTION(BlueprintCallable)
    void SplineMoveEnd();
    
public:
    UFUNCTION(BlueprintCallable)
    float GetTransformAlpha();
    
    UFUNCTION(BlueprintCallable)
    void cs0553toInGame();
    
};

