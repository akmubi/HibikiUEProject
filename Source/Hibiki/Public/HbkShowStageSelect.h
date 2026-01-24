#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkStageSelectDelegateDelegate.h"
#include "HbkShowStageSelect.generated.h"

class AHbkStageSelectController;
class UHbkShowStageSelect;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkShowStageSelect : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkStageSelectDelegate OnDecided;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkStageSelectDelegate OnCanceled;
    
    UHbkShowStageSelect();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkShowStageSelect* ShowStageSelect(UObject* WorldContextObject, AHbkStageSelectController* StageSelectController);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DecidedStage();
    
    UFUNCTION(BlueprintCallable)
    void CancelSelect();
    
};

