#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkAIUpdate.h"
#include "HbkEnemyAIController.h"
#include "HbkEm0600_AIController.generated.h"

class AActor;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm0600_AIController : public AHbkEnemyAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovableLength;
    
public:
    AHbkEm0600_AIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateMoveState(float DeltaTime, TEnumAsByte<HbkAIUpdate::Type>& ResultExec);
    
    UFUNCTION(BlueprintCallable)
    void SetMovingRotateParam(bool IsLookingTarget, bool IsLookingGoal);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBeatEvent(int32 NoteCount);
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetMovedVelociry();
    
    UFUNCTION(BlueprintCallable)
    FVector GetMovedDirection();
    
    UFUNCTION(BlueprintCallable)
    void EndMoveState();
    
    UFUNCTION(BlueprintCallable)
    void BeginMoveState(AActor* TargetActor, const FVector GoalLocation, const float AcceptanceRadius);
    
};

