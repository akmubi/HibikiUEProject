#pragma once
#include "CoreMinimal.h"
#include "BattleScoreWidgetDelegateDelegate.h"
#include "EHbkScoreActionType.h"
#include "HbkUserWidget.h"
#include "HbkBattleScoreaMagnificationPartsWidget.generated.h"

class UHbkBattleManager;
class UMaterialInstanceDynamic;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBattleScoreaMagnificationPartsWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleScoreWidgetDelegate OnRemoveDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkBattleManager> BattleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> GageMaeriaDynamicList;
    
public:
    UHbkBattleScoreaMagnificationPartsWidget();

    UFUNCTION(BlueprintCallable)
    void SetInfo(const FText& DrawText, UTexture2D* NameTexure, UTexture2D* NumTexure, EHbkScoreActionType ActionType, float ScoreScale, int32 BarCount, float Duration, int32 ReverbCost);
    
    UFUNCTION(BlueprintCallable)
    void Init(TArray<UMaterialInstanceDynamic*> NewMaterialDynamicList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SetInfo(const FText& DrawText, UTexture2D* NameTexure, UTexture2D* NumTexure, EHbkScoreActionType ActionType, float ScoreScale, int32 BarCount, float Duration, int32 ReverbCost);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_FinishTime();
    
};

