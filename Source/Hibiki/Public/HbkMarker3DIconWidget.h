#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "Blueprint/UserWidget.h"
#include "EClampMarkerType.h"
#include "EHbkGameMarkerAction.h"
#include "HbkMarker3DIconWidgetDispatherDelegate.h"
#include "HbkMarker3DWidget.h"
#include "HbkMarker3DIconWidget.generated.h"

class UHbkGameMarkerObject;
class UImage;
class UObject;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew, HideDropdown)
class HIBIKI_API UHbkMarker3DIconWidget : public UHbkMarker3DWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMarker3DIconWidgetDispather OnTargetInClampEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMarker3DIconWidgetDispather OnTargetOutClampEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMarker3DIconWidgetDispather OnTargetHiddenEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMarker3DIconWidgetDispather OnTargetVisibleEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMarker3DIconWidgetDispather OnDestroyMakerEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMarker3DIconWidgetDispather OnEnteredRadiusRangeFromCenter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMarker3DIconWidgetDispather OnEnteringRadiusRangeFromCenter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMarker3DIconWidgetDispather OnLeavedRadiusRangeFromCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* TargetObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SaveTargetPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDestroyWhenLostTargetObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAlwaysClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClampMarkerType ClampType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusRangeFromCenter;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin DrawRangePadding;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDrawRotateInWindow;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDrawRotateOutWindow;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHiddenInLength;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDestroyInLength;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HiddenOrDestroyInLength;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHiddenOutLength;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDestroyOutLength;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HiddenOrDestroyOutLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsChangeIconSizeFromLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeSizeFromLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsChangeIconAlphaFromLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeAlphaFromLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeAlphaFromRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawWidgetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MarkerTextureData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* AccentTextureData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* DrawTextureInClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* DrawTextureOutClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsChangeClampTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DrawTextureSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* MarkerTextData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* RangeTextData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LengthMinimumUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MarkerVectorTextureData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MarkerVectorImageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayStartAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayEndAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkGameMarkerAction, UWidgetAnimation*> AnimMap;
    
    UHbkMarker3DIconWidget();

private:
    UFUNCTION(BlueprintCallable)
    void WidgetVisible();
    
    UFUNCTION(BlueprintCallable)
    void WidgetHidden();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopDrawWidgetTime();
    
private:
    UFUNCTION(BlueprintCallable)
    void StopAction(EHbkGameMarkerAction Action);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTexture(UObject* NewDrawTextureInClamp, FVector2D NewDrawTextureSize);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetObject(UObject* NewTargetObject);
    
    UFUNCTION(BlueprintCallable)
    void SetDrawWidgetTime(float NewTime);
    
    UFUNCTION(BlueprintCallable)
    void RestartDrawWidgetTime();
    
    UFUNCTION(BlueprintCallable)
    void ResetDrawWidgetTime();
    
private:
    UFUNCTION(BlueprintCallable)
    bool PlayAction(EHbkGameMarkerAction Action, int32 LoopNum, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaySpeed, bool IsReset);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMakerVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugCVarDrawIcon();
    
    UFUNCTION(BlueprintCallable)
    void Invoke_DestroyMakerEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetAngle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMarkerSizeRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMarkerAlphaRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLengthFromPlayerToTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCenterPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Function_IsClampRangeInTarget();
    
    UFUNCTION(BlueprintCallable)
    void ForceRemoveMarker();
    
    UFUNCTION(BlueprintCallable)
    void EndDrawWidgetTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_UpdateRangeText(float Length);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_TargetVisibleEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_TargetOutClampEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_TargetInClampEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_TargetHiddenEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_StartPlayAction(EHbkGameMarkerAction Action, int32 LoopNum, EUMGSequencePlayMode::Type PlayMode, float PlaySpeed, bool IsReset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SetTargetInSearchItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_ResetStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSetTargetObject(UObject* NewTargetObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnFinishInit(UHbkGameMarkerObject* MarkerObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_LeavedRadiusRangeFromCenter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_EnteringRadiusRangeFromCenter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_EnteredRadiusRangeFromCenter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_DestroyMakerEvent();
    
};

