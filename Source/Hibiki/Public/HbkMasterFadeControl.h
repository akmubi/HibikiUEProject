#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHbkTalkFadeColor.h"
#include "EHbkTalkFadeFunc.h"
#include "Templates/SubclassOf.h"
#include "HbkMasterFadeControl.generated.h"

class UTngUserWidget;

UCLASS(Blueprintable)
class UHbkMasterFadeControl : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTngUserWidget> MasterFadeWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTngUserWidget> TitleToHOFadeWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTngUserWidget> TitleToHOFadeWidgetClassIns;
    
public:
    UHbkMasterFadeControl();

    UFUNCTION(BlueprintCallable)
    void StartMasterFade(EHbkTalkFadeFunc InFadeFunc, float InDuration, EHbkTalkFadeColor InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFadeInDuration() const;
    
};

