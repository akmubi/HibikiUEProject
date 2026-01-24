#pragma once
#include "CoreMinimal.h"
#include "EHbkPartnerType.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkTaskTutorialDelegateDelegate.h"
#include "HbkUseMacaronTutorialTask.generated.h"

class AHbkPartnerCharacterBase;
class UHbkUseMacaronTutorialTask;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkUseMacaronTutorialTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskTutorialDelegate OnSelectedMacaron;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskTutorialDelegate OnCalledMacaron;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskTutorialDelegate OnSuccess;
    
    UHbkUseMacaronTutorialTask();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSelectedPartner(int32 SelectIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPartnerEndedMiniGame(EHbkPartnerType PartnerType, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnCalledPartner(AHbkPartnerCharacterBase* CalledPartner, bool bIsAction);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkUseMacaronTutorialTask* BeginMacaronPartnerActionTutorial(UObject* WorldContextObject);
    
};

