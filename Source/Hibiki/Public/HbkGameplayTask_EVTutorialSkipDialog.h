#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_EVTutorialSkipDialog.generated.h"

class UHbkDialog_Tutorial;
class UHbkGameplayTask_EVTutorialSkipDialog;
class UObject;
class UStringTable;

UCLASS(Blueprintable)
class UHbkGameplayTask_EVTutorialSkipDialog : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnSkip;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnNotSkip;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkDialog_Tutorial* Dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStringTable* StringTable;
    
public:
    UHbkGameplayTask_EVTutorialSkipDialog(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnDecideConfirmMenu(int32 ButtonNo);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelConfirmMenu(int32 ButtonNo);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVTutorialSkipDialog* EventTutorialSkipDialog(UObject* WorldContextObject, UStringTable* NewStringTable, const FString& MessageKey);
    
};

