#pragma once
#include "CoreMinimal.h"
#include "HbkDialogRequestParam.h"
#include "HbkDialogTextSetting.h"
#include "HbkDialogWidgetClasses.h"
#include "PendingParam.h"
#include "TngGameSystem.h"
#include "HbkDialogSystem.generated.h"

class UHbkDialogWidget;
class UObject;

UCLASS(Blueprintable)
class UHbkDialogSystem : public UTngGameSystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPendingParam> PendingParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkDialogWidget> ActiveDialogWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkDialogWidgetClasses WidgetClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkDialogTextSetting TextSetting;
    
public:
    UHbkDialogSystem();

protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool K2_HasDialog(UObject* WorldContextObject, const FString& Key);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool K2_HasAnyDialogs(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool K2_ClearDialog(UObject* WorldContextObject, const FString& Key);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool K2_AddDialog(UObject* WorldContextObject, const FHbkDialogRequestParam& RequestParam);
    
};

