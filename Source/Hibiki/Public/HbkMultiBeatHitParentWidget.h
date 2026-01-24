#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "EHbkBeatHitType.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkMultiBeatHitParentWidget.generated.h"

class UHbkMultiBeatHitWidget;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkMultiBeatHitParentWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkBeatHitType, TSubclassOf<UHbkMultiBeatHitWidget>> CreateBeatHitMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPanelWidget> BeatHitPanel;
    
public:
    UHbkMultiBeatHitParentWidget();

private:
    UFUNCTION(BlueprintCallable)
    void VisibilityChanged(ESlateVisibility InVisibility);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartBeatHit(int32 BeatHitId, EHbkBeatHitType BeatHitType, float PlayRate, FVector2D Offset, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetInfo(UPanelWidget* NewBeatHitPanel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnCreateBeatHit(UHbkMultiBeatHitWidget* BeatHitWidget, int32 BeatHitId, EHbkBeatHitType BeatHitType, float PlayRate, FVector2D Offset, float Scale);
    
};

