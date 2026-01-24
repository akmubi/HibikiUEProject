#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EHbkEm6000_IntermissionState.h"
#include "HbkEm6000_IntermissionCompletedDelegate.h"
#include "HbkEm6000_IntermissionTransitionDelegate.h"
#include "HbkEm6000_IntermissionTaskBase.generated.h"

class AHbkEm6000_Roquefort;
class AHbkEm6000_StageController;
class UHbkRhythmSynchroComponent;
class UObject;

UCLASS(Blueprintable)
class AHbkEm6000_IntermissionTaskBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000_IntermissionCompleted OnCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm6000_IntermissionTransition OnTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroComponent* RhythmSynchroComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm6000_StageController> StageController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm6000_Roquefort> Boss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> OwnerObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartCheckPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm6000_IntermissionState State;
    
public:
    AHbkEm6000_IntermissionTaskBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void CallOnEndFinishCamera();
    
};

