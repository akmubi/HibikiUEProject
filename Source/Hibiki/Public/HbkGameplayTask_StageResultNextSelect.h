#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkGameplayTask_StageResultNextSelect.generated.h"

class UHbkGameplayTask_StageResultNextSelect;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_StageResultNextSelect : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskStageResultNextSelectDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskStageResultNextSelectDelegate AllEnded;
    
    UHbkGameplayTask_StageResultNextSelect();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_StageResultNextSelect* StageResultNextSelect(UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Receive_ResultNextSelect();
    
};

