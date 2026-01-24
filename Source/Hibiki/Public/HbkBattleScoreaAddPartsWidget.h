#pragma once
#include "CoreMinimal.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameplayTagContainer.h"
#include "BattleScoreWidgetDelegateDelegate.h"
#include "EHbkScoreActionType.h"
#include "HbkUserWidget.h"
#include "HbkBattleScoreaAddPartsWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBattleScoreaAddPartsWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleScoreWidgetDelegate OnRemoveDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinishTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEasingFunc::Type> EasingMoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveTimeMax;
    
public:
    UHbkBattleScoreaAddPartsWidget();

    UFUNCTION(BlueprintCallable)
    void MoveStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SetInfo(const FText& DrawText, UTexture2D* NameTexure, UTexture2D* NumTexure, EHbkScoreActionType ActionType, FGameplayTagContainer ActionTags, float AddScore, int32 CreateNum, int32 ReverbCost);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_ForcedFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_FinishTime();
    
};

