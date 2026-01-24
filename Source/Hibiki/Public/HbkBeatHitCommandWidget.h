#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHbkBeatHitCommand.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkBeatHitCommandWidget.generated.h"

class UHbkBeatHitCommandPartsWidget;
class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBeatHitCommandWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* IconPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkBeatHitCommand, TSubclassOf<UHbkBeatHitCommandPartsWidget>> PartsClassMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHbkBeatHitCommandPartsWidget*> ComboJudgeList;
    
public:
    UHbkBeatHitCommandWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLocation(FVector2D Location);
    
    UFUNCTION(BlueprintCallable)
    void RestartPanel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFailureAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayClearAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceClose();
    
    UFUNCTION(BlueprintCallable)
    void FinishedClearAnim(UHbkBeatHitCommandPartsWidget* ButtonWidget);
    
};

