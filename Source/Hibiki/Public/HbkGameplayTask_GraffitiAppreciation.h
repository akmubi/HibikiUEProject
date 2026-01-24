#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "Templates/SubclassOf.h"
#include "HbkGameplayTask_GraffitiAppreciation.generated.h"

class UHbkGameplayTask_GraffitiAppreciation;
class UObject;
class UTngUserWidget;

UCLASS(Blueprintable)
class UHbkGameplayTask_GraffitiAppreciation : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndDelegate OnEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTngUserWidget> BackButtonWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTngUserWidget* BackButtonWidget;
    
public:
    UHbkGameplayTask_GraffitiAppreciation(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnInputCancel();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_GraffitiAppreciation* GraffitiAppreciation(UObject* WorldContextObject, TSubclassOf<UTngUserWidget> NewBackButtonWidgetClass);
    
};

