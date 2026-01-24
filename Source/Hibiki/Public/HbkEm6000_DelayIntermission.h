#pragma once
#include "CoreMinimal.h"
#include "Em6000_DelayIntermissionCompletedDelegateDelegate.h"
#include "Em6000_DelayIntermissionTransitionDelegateDelegate.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "Templates/SubclassOf.h"
#include "HbkEm6000_DelayIntermission.generated.h"

class AActor;
class AHbkEm6000_IntermissionTaskBase;
class AHbkEm6000_StageController;
class UHbkEm6000_DelayIntermission;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkEm6000_DelayIntermission : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEm6000_DelayIntermissionCompletedDelegate Completed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEm6000_DelayIntermissionTransitionDelegate Transition;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm6000_StageController> StageController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEm6000_IntermissionTaskBase> TaskClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartCheckPoint;
    
public:
    UHbkEm6000_DelayIntermission();

protected:
    UFUNCTION(BlueprintCallable)
    void OnIntermissionTransition(const UObject* OwnerObject, const AActor* SelfObject);
    
    UFUNCTION(BlueprintCallable)
    void OnIntermissionCompleted(const UObject* OwnerObject, const AActor* SelfObject);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkEm6000_DelayIntermission* DelayIntermission(UObject* WorldContextObject, AHbkEm6000_StageController* NewStageController, TSubclassOf<AHbkEm6000_IntermissionTaskBase> NewTaskClass, bool NewBIsStartCheckPoint);
    
};

